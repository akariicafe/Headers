@class ECEmailAddressComponents, NSString, NSArray;

@interface ECEmailAddress : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *idnaAddress;
@property (readonly, copy, nonatomic) ECEmailAddressComponents *components;
@property (readonly) NSString *stringValue;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *simpleAddress;
@property (readonly, copy) NSString *localPart;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSArray *groupList;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (id)emailAddressesFromStrings:(id)a0 invalidAddresses:(id *)a1;
+ (id)_cachedEmailAddressForString:(id)a0 generator:(id /* block */)a1;
+ (id)emailAddressWithString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)_initWithComponents:(id)a0;
- (BOOL)_createComponentsFrom:(id)a0;

@end
