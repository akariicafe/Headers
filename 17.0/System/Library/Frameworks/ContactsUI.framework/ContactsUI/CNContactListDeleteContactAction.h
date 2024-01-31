@class CNContactStore, NSString, CNContact, CNUICoreRecentsManager;

@interface CNContactListDeleteContactAction : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager;
@property (retain, nonatomic) CNContactStore *contactStore;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeAction;
- (BOOL)executeDeleteAction;
- (id)initWithContact:(id)a0 contactStore:(id)a1 containerIdentifier:(id)a2 recentsManager:(id)a3;
- (void)undoAction;
- (void)undoDeleteAction;

@end
