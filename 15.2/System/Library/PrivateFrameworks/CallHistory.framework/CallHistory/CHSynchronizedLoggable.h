@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (id)logHandle;
- (void)execute:(id /* block */)a0;
- (id)initWithName:(const char *)a0 queue:(id)a1;
- (BOOL)executeSyncWithBOOL:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;
- (id)executeSyncWithResult:(id /* block */)a0;
- (void)executeSync:(id /* block */)a0;
- (id)queue;

@end
