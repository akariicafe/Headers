@class NSString, CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

- (void)start;
- (void).cxx_destruct;
- (void)checkTLKStatus;
- (BOOL)ensureControl;
- (id)initWithItemModifyContext:(id)a0;
- (void)syncView;

@end
