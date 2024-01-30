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

- (void)performBlock:(id /* block */)a0;
- (BOOL)isCanceled;
- (id)nts_cancel;
- (void)addCancelationBlock:(id /* block */)a0;
- (void)callCancelationBlocks:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addCancelable:(id)a0;
- (void)cancel;

@end
