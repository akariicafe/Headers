@class NSString, CKKSControl, PCSCKKSItemModifyContext;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

- (id)initWithItemModifyContext:(id)a0;
- (BOOL)ensureControl;
- (void)start;
- (void).cxx_destruct;
- (void)checkTLKStatus;
- (void)syncView;

@end
