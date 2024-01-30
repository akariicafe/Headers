@class NSString;

@interface NPKTransientPassAssertion : NPKTransientAssertion

@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL requestServiceMode;
@property (nonatomic) BOOL disableCardSelection;

- (void).cxx_destruct;
- (void)_resyncState;
- (id)initWithPassWithUniqueID:(id)a0;

@end
