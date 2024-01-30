@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)removeAllCancelTokens;
- (void)removeCancelToken:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (void)cancel;

@end
