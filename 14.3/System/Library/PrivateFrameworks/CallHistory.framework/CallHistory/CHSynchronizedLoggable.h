@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)executeSyncWithBOOL:(id /* block */)a0;
- (id)initWithName:(const char *)a0 queue:(id)a1;
- (id)logHandle;
- (id)executeSyncWithResult:(id /* block */)a0;
- (id)queue;
- (void)executeSync:(id /* block */)a0;
- (id)initWithName:(const char *)a0;

@end
