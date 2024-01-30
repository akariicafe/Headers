@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)cancel;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (id)init;

@end
