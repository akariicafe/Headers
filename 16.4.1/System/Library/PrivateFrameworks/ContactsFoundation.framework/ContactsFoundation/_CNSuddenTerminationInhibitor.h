@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)initWithProcessInfo:(id)a0;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
