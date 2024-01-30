@interface SCRTaskHandler : NSObject <NSCopying> {
    id /* block */ _syncBlock;
    id /* block */ _asyncBlock;
}

+ (id)asynchronousHandlerWithBlock:(id /* block */)a0;
+ (id)synchronousHandlerWithBlock:(id /* block */)a0;

- (id /* block */)_asyncHandler;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSyncBlock:(id /* block */)a0 asyncBlock:(id /* block */)a1;
- (id /* block */)_syncHandler;
- (void)performWithContext:(id)a0 completion:(id /* block */)a1;

@end
