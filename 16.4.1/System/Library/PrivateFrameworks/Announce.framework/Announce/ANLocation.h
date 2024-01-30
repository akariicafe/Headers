@class NSArray, NSUUID, NSString, NSNumber;

@interface ANLocation : NSObject <ANMessage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *userUUIDs;
@property (retain, nonatomic) NSArray *deviceIDs;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSNumber *homeLocationStatus;
@property (copy, nonatomic) NSUUID *homeUUID;
@property (retain, nonatomic) NSArray *roomUUIDs;
@property (retain, nonatomic) NSArray *zoneUUIDs;
@property (readonly, nonatomic) unsigned long long target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (id)copy;
- (id)message;
- (void).cxx_destruct;
- (id)initWithHomeID:(id)a0;

@end
