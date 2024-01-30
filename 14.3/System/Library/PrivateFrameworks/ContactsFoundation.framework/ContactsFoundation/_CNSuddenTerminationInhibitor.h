@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProcessInfo:(id)a0;
- (void)stop;
- (void)start;

@end
