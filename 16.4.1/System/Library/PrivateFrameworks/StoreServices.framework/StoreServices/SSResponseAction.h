@class NSString, SSDialog, NSURL, SSAccount;

@interface SSResponseAction : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) SSAccount *account;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *creditsString;
@property (readonly, nonatomic) SSDialog *dialog;
@property (readonly, nonatomic) NSString *footerSection;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long URLBagType;

+ (id)_selectFooterActionWithSection:(id)a0;
+ (id)_dialogActionWithTouchIDDialog:(id)a0;
+ (id)_actionWithActionType:(id)a0;
+ (id)_checkInAppQueueActionWithClientID:(id)a0 environment:(id)a1;
+ (id)_dialogActionWithDialog:(id)a0;
+ (id)_invalidateURLBagsAction;
+ (id)_setActiveAccountActionWithAccount:(id)a0;
+ (id)_setCreditsActionWithCredits:(id)a0 account:(id)a1;
+ (id)_urlActionWithType:(id)a0 URL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
