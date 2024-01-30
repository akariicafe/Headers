@class NSString, MCDeviceUploadRequestType, MCDeviceUploadUser;

@interface MCDeviceUploadSubmitDeviceRequestPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *orgId;
@property (readonly, nonatomic) NSString *orgName;
@property (readonly, nonatomic) MCDeviceUploadRequestType *requestType;
@property (readonly, nonatomic) MCDeviceUploadUser *submitter;
@property (readonly, nonatomic) MCDeviceUploadUser *approver;
@property (readonly, nonatomic) NSString *soldToId;

- (void).cxx_destruct;
- (id)initWithOrgId:(id)a0 orgName:(id)a1 requestType:(id)a2 submitter:(id)a3 approver:(id)a4 soldToId:(id)a5;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
