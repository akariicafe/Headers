@interface HDBackgroundTaskClient : NSObject {
    id /* block */ _taskHandler;
}

- (void)deliverTask:(id)a0 taskName:(id)a1 onQueue:(id)a2;
- (void).cxx_destruct;
- (id)initWithTaskHandler:(id /* block */)a0;

@end
