@class NSUUID, NSString, NSArray;

@interface HMMediaGroup : NSObject <HMFLogging, HMFObject, HMEProtoBufferCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *identifier;
@property (copy) NSString *name;
@property (getter=isDefaultName) BOOL defaultName;
@property (copy) NSUUID *associatedGroupIdentifier;
@property (copy) NSArray *destinationUniqueIdentifiersInternal;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSArray *destinationUniqueIdentifiers;
@property (readonly, copy) NSArray *destinationIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)groupsWithProtoBufferData:(id)a0;
+ (id)protoBufferDataWithGroups:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)mediaSystemData;
- (id)encodeToProtoBufferData;
- (void)encodeToProtoBufferDataWithEvent:(id)a0;
- (id)initClassWithProtoBufferData:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 defaultName:(BOOL)a3 destinationIdentifiers:(id)a4 associatedGroupIdentifier:(id)a5;
- (id)initWithProtoBufferData:(id)a0;

@end
