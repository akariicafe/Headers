@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {
    BOOL _safe;
}

@property (retain, nonatomic) CUTResult *result;

- (id)then:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerResultBlock:(id /* block */)a0;
- (id)initWithResult:(id)a0 safe:(BOOL)a1;

@end
