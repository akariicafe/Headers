@class CNContact;

@interface CNContactListSetMyCardAction : CNContactListUndoableAction

@property (retain, nonatomic) CNContact *originalMeContact;

+ (id)log;

- (void)performAction;
- (void).cxx_destruct;
- (void)fetchOriginalMeContact;
- (id)initWithContact:(id)a0 configuration:(id)a1;
- (void)performUndoAction;
- (void)updateMeContact:(id)a0;
- (id)updatedMeContact;

@end
