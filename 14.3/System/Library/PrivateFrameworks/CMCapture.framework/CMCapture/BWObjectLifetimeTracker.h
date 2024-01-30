@interface BWObjectLifetimeTracker : NSObject {
    id /* block */ _deallocHandler;
}

+ (id)trackerWithDeallocHandler:(id /* block */)a0;
+ (void)trackAttachmentBearer:(void *)a0 deallocHandler:(id /* block */)a1;

- (void)dealloc;
- (id)initWithDeallocHandler:(id /* block */)a0;

@end
