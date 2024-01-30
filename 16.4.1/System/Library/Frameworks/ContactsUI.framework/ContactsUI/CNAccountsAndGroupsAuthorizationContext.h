@class CNAccountsAndGroupsCell, NSArray, CNAccountsAndGroupsItem, CNContainerPickerItem;

@interface CNAccountsAndGroupsAuthorizationContext : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) CNAccountsAndGroupsItem *item;
@property (retain, nonatomic) CNContainerPickerItem *containerItem;
@property (retain, nonatomic) CNAccountsAndGroupsCell *cell;
@property (retain, nonatomic) NSArray *contactsToAddToDropDestination;
@property (copy, nonatomic) id /* block */ actionCompletionHandler;

- (void).cxx_destruct;

@end
