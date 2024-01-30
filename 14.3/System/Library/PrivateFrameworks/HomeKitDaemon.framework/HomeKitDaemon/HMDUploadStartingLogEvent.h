@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent

@property (readonly, nonatomic) NSString *saveReason;

+ (id)uuid;
+ (id)uploadReason:(id)a0;

- (void).cxx_destruct;
- (id)initUploadReason:(id)a0;

@end
