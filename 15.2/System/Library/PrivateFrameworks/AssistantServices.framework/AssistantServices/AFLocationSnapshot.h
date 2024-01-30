@class NSString, NSNumber;

@interface AFLocationSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *latitude;
@property (readonly, copy, nonatomic) NSNumber *longitude;
@property (readonly, copy, nonatomic) NSNumber *altitude;
@property (readonly, copy, nonatomic) NSNumber *direction;
@property (readonly, copy, nonatomic) NSNumber *speed;
@property (readonly, copy, nonatomic) NSNumber *verticalAccuracy;
@property (readonly, copy, nonatomic) NSNumber *horizontalAccuracy;
@property (readonly, nonatomic) BOOL preciseLocationEnabled;
@property (readonly, nonatomic) long long accessState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 altitude:(id)a2 direction:(id)a3 speed:(id)a4 verticalAccuracy:(id)a5 horizontalAccuracy:(id)a6 preciseLocationEnabled:(BOOL)a7 accessState:(long long)a8;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSetRequestOrigin:(id)a0;
- (id)ace_setRequestOrigin;

@end
