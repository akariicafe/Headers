@class NSUUID, NSDictionary, NSString, NSArray;

@interface HMMediaDestination : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy) NSDictionary *payloadForNullDestination;
@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long supportedOptions;
@property (copy) NSUUID *audioGroupIdentifier;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)payloadForDestination:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 parentIdentifier:(id)a1 supportedOptions:(unsigned long long)a2 audioGroupIdentifier:(id)a3;
- (id)initWithUniqueIdentifier:(id)a0 parentIdentifier:(id)a1 supportedOptions:(unsigned long long)a2;
- (BOOL)containsSupportedOptions:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
