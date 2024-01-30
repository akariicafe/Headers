@class NSString, NSMutableArray;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWrappingCancelable:(id)a0;
+ (id)tokenWithCancelationBlock:(id /* block */)a0;

- (void)cancel;
- (void)performBlock:(id /* block */)a0;
- (void)addCancelationBlock:(id /* block */)a0;
- (BOOL)isCanceled;
- (id)init;
- (void).cxx_destruct;
- (id)nts_cancel;
- (void)callCancelationBlocks:(id)a0;
- (void)addCancelable:(id)a0;

@end
