@protocol CNContactListAction;

@interface CNContactListActionAuthorizationContext : NSObject

@property (retain, nonatomic) id<CNContactListAction> action;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
