@class NSString, NSSet, NSDictionary;

@interface PTSettingsClassStructure : NSObject <NSSecureCoding> {
    NSDictionary *_structNames;
    NSDictionary *_classes;
    NSDictionary *_classNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *settingsClassName;
@property (nonatomic) unsigned long long settingsClassVersion;
@property (retain, nonatomic) NSSet *leafKeys;
@property (retain, nonatomic) NSSet *childKeys;
@property (retain, nonatomic) NSSet *outletKeys;

- (id)_decodeStringSetForKey:(id)a0 withCoder:(id)a1;
- (void)_generateClassNamesIfNecessary;
- (void).cxx_destruct;
- (Class)childClassForKey:(id)a0;
- (id)_decodeStringStringDictionaryForKey:(id)a0 withCoder:(id)a1;
- (id)leafStructNameForKey:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)filteredForProxySettings;
- (BOOL)isEqual:(id)a0;
- (Class)leafClassForKey:(id)a0;
- (Class)_classForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
