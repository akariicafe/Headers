@class CNContactListActionConfiguration, NSArray;
@protocol CNContactListActionDelegate;

@interface CNContactListAction : NSObject

@property (retain, nonatomic) CNContactListActionConfiguration *configuration;
@property (retain, nonatomic) NSArray *contacts;
@property (weak, nonatomic) id<CNContactListActionDelegate> delegate;

- (void)performAction;
- (void).cxx_destruct;
- (id)initWithContacts:(id)a0 configuration:(id)a1;
- (BOOL)editRequiresAuthorization;
- (BOOL)editRequiresAuthorizationCheckForContact:(id)a0 containerIdentifier:(id)a1;
- (BOOL)shouldReloadListOnCompletion;

@end
