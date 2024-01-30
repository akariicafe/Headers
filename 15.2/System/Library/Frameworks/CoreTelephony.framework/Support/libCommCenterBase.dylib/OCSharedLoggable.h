@interface OCSharedLoggable : NSObject

@property (nonatomic, getter=getQueue) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } queue;
@property (nonatomic, getter=getLogContext) struct OsLogContext { char *domain; struct OSSharedRef<os_log_s> { struct os_log_s *fRef; } handle; } logContext;

- (void)executeFunction:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)executeBlock:(id /* block */)a0;
- (id)initWithQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a0 logContext:(struct OsLogContext { char *x0; struct OSSharedRef<os_log_s> { struct os_log_s *x0; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 qosClass:(unsigned int)a1 logContext:(struct OsLogContext { char *x0; struct OSSharedRef<os_log_s> { struct os_log_s *x0; } x1; })a2;
- (id).cxx_construct;

@end
