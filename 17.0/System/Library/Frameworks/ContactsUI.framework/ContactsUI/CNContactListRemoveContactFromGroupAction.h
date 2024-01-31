@class CNContactStore, NSString, CNContact, CNGroup;

@interface CNContactListRemoveContactFromGroupAction : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNGroup *group;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeAction;
- (BOOL)executeRemoveFromGroupAction;
- (id)initWithContact:(id)a0 contactStore:(id)a1 containerIdentifier:(id)a2;
- (void)undoAction;
- (void)undoRemoveFromGroupAction;

@end
