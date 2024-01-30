@class HMAccessorySetupPayload, NSUUID, NSString, MTRSetupPayload, NSArray;

@interface HMAccessorySetupRequest : NSObject <HMFObject, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) HMAccessorySetupPayload *payload;
@property (copy) NSUUID *homeUniqueIdentifier;
@property (copy) NSUUID *suggestedRoomUniqueIdentifier;
@property (copy) NSString *suggestedAccessoryName;
@property (retain) MTRSetupPayload *matterPayload;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
