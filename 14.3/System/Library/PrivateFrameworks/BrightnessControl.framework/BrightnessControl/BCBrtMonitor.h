@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;

@end
