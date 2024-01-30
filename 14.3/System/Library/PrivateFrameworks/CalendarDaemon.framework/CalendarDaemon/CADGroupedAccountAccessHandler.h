@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler>

@property (readonly, nonatomic) NSMutableArray *accessHandlers;

- (BOOL)isAccountManaged:(id)a0;
- (BOOL)isActionAllowed:(unsigned long long)a0 forAccountIdentifier:(id)a1;
- (id)init;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addAccountAccessHandler:(id)a0;

@end
