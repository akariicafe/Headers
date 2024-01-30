@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest

@property (readonly, nonatomic) NSDictionary *receiptProperties;

- (void)_start;
- (void).cxx_destruct;
- (void)_handleReply:(id)a0;
- (BOOL)_wantsExpired;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsVPP;
- (void)_requestCompletedWithError:(id)a0;
- (id)initWithReceiptProperties:(id)a0;

@end
