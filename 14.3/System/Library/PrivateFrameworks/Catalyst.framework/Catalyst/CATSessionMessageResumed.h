@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (copy, nonatomic) NSArray *pendingRemoteTaskUUIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithSessionUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
