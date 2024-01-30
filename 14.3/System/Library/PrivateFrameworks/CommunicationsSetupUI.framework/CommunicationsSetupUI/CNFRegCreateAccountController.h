@protocol CNFRegCreateAccountControllerDelegate;

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController

@property (nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;

- (id)bagKey;
- (void)dealloc;
- (id)logName;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;

@end
