@class ACAccount;

@interface ACDAccountChange : NSObject

@property (readonly, nonatomic) int changeType;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) ACAccount *oldAccount;

+ (id)changeWithChangeType:(int)a0 account:(id)a1 oldAccount:(id)a2;

- (void).cxx_destruct;
- (id)initWithChangeType:(int)a0 account:(id)a1 oldAccount:(id)a2;

@end
