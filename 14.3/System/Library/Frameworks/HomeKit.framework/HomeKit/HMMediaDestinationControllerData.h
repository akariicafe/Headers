@class NSUUID, NSArray, NSString;

@interface HMMediaDestinationControllerData : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *destinationIdentifier;
@property (copy) NSArray *availableDestinationIdentifiers;
@property (readonly, copy) NSUUID *identifier;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 destinationIdentifier:(id)a2 availableDestinationIdentifiers:(id)a3;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
