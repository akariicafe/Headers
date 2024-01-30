@class VSUserAccount, NSError;

@interface VSUserAccountUpdateRequest : NSObject

@property (retain, nonatomic) VSUserAccount *userAccount;
@property (retain, nonatomic) VSUserAccount *updatedUserAccount;
@property (retain, nonatomic) NSError *updateError;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUserAccount:(id)a0;

@end
