@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllCancelTokens;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (void)removeCancelToken:(id)a0;

@end
