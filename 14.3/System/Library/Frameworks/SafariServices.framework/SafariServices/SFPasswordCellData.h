@class WBSPasswordWarning, NSString, WBSSavedPassword;

@interface SFPasswordCellData : NSObject

@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, nonatomic) BOOL savedPasswordIsOnlySavedPasswordForHighLevelDomain;

+ (id)passwordCellDataWithSavedPassword:(id)a0 warning:(id)a1 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithSavedPassword:(id)a0 warning:(id)a1 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a2;

@end
