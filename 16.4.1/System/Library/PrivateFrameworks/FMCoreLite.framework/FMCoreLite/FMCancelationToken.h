@class NSString, NSMutableArray;

@interface FMCancelationToken : NSObject <FMCancelable> {
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithCancelationBlock:(id /* block */)a0;
+ (id)tokenWrappingCancelable:(id)a0;

- (BOOL)isCanceled;
- (void)addCancelable:(id)a0;
- (void)callCancelationBlocks:(id)a0;
- (id)nts_cancel;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)addCancelationBlock:(id /* block */)a0;

@end
