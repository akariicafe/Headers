@interface SCNExportOperation : NSOperation

- (BOOL)canceled;
- (double)progress;
- (id)error;
- (BOOL)succeded;

@end
