@class WBSPasswordWarning, NSString, WBSSavedPassword;

@interface SFPasswordCellData : NSObject

@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSString *searchPattern;
@property (readonly, nonatomic) BOOL savedPasswordIsOnlySavedPasswordForHighLevelDomain;

+ (id)passwordCellDataWithSavedPassword:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSavedPassword:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a3;

@end
