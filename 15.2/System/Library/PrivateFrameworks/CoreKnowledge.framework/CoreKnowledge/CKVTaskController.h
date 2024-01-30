@class CKVSettings;

@interface CKVTaskController : NSObject {
    CKVSettings *_settings;
}

@property BOOL taskExecutionAllowed;

+ (id)adminControllerWithSettings:(id)a0;
+ (id)daemonControllerWithSettings:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)prohibitTaskExecution;
- (void)allowTaskExecution;
- (BOOL)isTaskExecutionAllowed;
- (id)initWithSettings:(id)a0 taskExecutionAllowed:(BOOL)a1;
- (BOOL)shouldExecuteTask:(unsigned short)a0;

@end
