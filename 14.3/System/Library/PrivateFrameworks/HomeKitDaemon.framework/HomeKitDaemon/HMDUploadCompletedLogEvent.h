@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent

@property (readonly, nonatomic) NSError *error;

+ (id)uuid;
+ (id)uploadCompletedWithError:(id)a0;

- (void).cxx_destruct;
- (id)initUploadWithError:(id)a0;

@end
