@class NSString, CKContainerID, NSError;

@interface CKAutoBugCaptureMetadata : NSObject

@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSError *errorPayload;
@property (nonatomic) long long reason;

- (void).cxx_destruct;

@end
