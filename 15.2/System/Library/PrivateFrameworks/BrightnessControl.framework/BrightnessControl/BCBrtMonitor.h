@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;

@end
