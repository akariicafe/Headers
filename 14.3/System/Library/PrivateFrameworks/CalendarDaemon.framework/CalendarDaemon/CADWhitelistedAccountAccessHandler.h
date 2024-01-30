@protocol CADACAccountsProvider;

@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler>

@property (readonly, nonatomic) id<CADACAccountsProvider> accountsProvider;

- (BOOL)isAccountManaged:(id)a0;
- (BOOL)isActionAllowed:(unsigned long long)a0 forAccountIdentifier:(id)a1;
- (id)initWithAccountsProvider:(id)a0;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
