@class NSString, CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

- (void).cxx_destruct;
- (void)start;
- (void)syncView;
- (id)initWithItemModifyContext:(id)a0;
- (void)checkTLKStatus;
- (BOOL)ensureControl;

@end
