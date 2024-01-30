@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProcessInfo:(id)a0;
- (void)stop;

@end
