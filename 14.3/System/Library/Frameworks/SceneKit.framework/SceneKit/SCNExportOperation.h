@interface SCNExportOperation : NSOperation

- (BOOL)canceled;
- (id)error;
- (double)progress;
- (BOOL)succeded;

@end
