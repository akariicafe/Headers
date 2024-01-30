@class NSString, NSArray;

@interface HMLightProfileSettings : NSObject <HMFObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithSupportedFeatures:(unsigned long long)a0 naturalLightingEnabled:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
