@protocol CNFRegViewAccountControllerDelegate;

@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController

@property (nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;

- (id)bagKey;
- (id)logName;
- (void)dealloc;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;

@end
