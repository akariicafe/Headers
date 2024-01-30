@class WBSPasswordWarning, WBSSavedAccount, NSString;

@interface SFAccountCellData : NSObject

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSString *searchPattern;
@property (readonly, nonatomic) BOOL savedAccountIsOnlySavedAccountForHighLevelDomain;

+ (id)accountCellDataWithSavedAccount:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSavedAccount:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)a3;

@end
