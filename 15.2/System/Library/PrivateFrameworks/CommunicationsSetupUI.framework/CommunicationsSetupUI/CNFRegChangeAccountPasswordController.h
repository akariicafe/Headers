@class NSString;
@protocol CNFRegChangeAccountPasswordDelegate;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController

@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) id<CNFRegChangeAccountPasswordDelegate> delegate;

- (id)bagKey;
- (void).cxx_destruct;
- (id)logName;
- (void)dealloc;
- (id)initWithRegController:(id)a0 appleID:(id)a1;
- (id)overrideURLForURL:(id)a0;
- (void)setHeadersForRequest:(id)a0;
- (BOOL)canSendURLRequest:(id)a0;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;

@end
