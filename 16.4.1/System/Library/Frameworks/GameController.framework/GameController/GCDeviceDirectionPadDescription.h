@class NSString, NSSet;

@interface GCDeviceDirectionPadDescription : GCDeviceElementDescription {
    unsigned long long _attributes;
    unsigned long long _sourceAttributes;
    NSString *_name;
    NSSet *_additionalAliases;
    NSString *_nameLocalizationKey;
    NSString *_symbolName;
}

@property (readonly, getter=isDigital) BOOL digital;
@property (readonly) NSString *sourceNameLocalizationKey;
@property (readonly) NSString *sourceSymbolName;
@property (readonly) float sourcePressedThreshold;
@property (readonly) unsigned long long sourceUpExtendedEventFieldIndex;
@property (readonly) unsigned long long sourceDownExtendedEventFieldIndex;
@property (readonly) unsigned long long sourceLeftExtendedEventFieldIndex;
@property (readonly) unsigned long long sourceRightExtendedEventFieldIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)additionalAliases;
- (id)initWithName:(id)a0 additionalAliases:(id)a1 attributes:(unsigned long long)a2 nameLocalizationKey:(id)a3 symbolName:(id)a4 sourceAttributes:(unsigned long long)a5 sourceNameLocalizationKey:(id)a6 sourceSymbolName:(id)a7 sourcePressedThreshold:(float)a8 sourceUpExtendedEventField:(unsigned long long)a9 sourceDownExtendedEventField:(unsigned long long)a10 sourceLeftExtendedEventField:(unsigned long long)a11 sourceRightExtendedEventField:(unsigned long long)a12;
- (id)initWithName:(id)a0 additionalAliases:(id)a1 attributes:(unsigned long long)a2 nameLocalizationKey:(id)a3 symbolName:(id)a4 sourceAttributes:(unsigned long long)a5 sourceUpExtendedEventField:(unsigned long long)a6 sourceDownExtendedEventField:(unsigned long long)a7 sourceLeftExtendedEventField:(unsigned long long)a8 sourceRightExtendedEventField:(unsigned long long)a9;
- (BOOL)isBoundToSystemGesture;
- (BOOL)isMappableToSystemGestures;
- (BOOL)isRemappable;
- (id)nameLocalizationKey;

@end
