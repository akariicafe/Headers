@interface CHLogger : NSObject {
    struct os_log_s { } *_logHandle;
}

- (id)initWithDomain:(const char *)a0;
- (struct os_log_s { } *)logHandle;

@end
