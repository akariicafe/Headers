@class UIView, NSString, NSArray, NSAttributedString, CNPolicy, NSDictionary, CNContactStore, UIViewController, CNContactFormatter;

@interface CNContactContentViewControllerConfiguration : NSObject

@property (nonatomic) BOOL isOutOfProcess;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL alwaysEditing;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsPropertyActions;
@property (nonatomic) BOOL allowsCardActions;
@property (nonatomic) BOOL allowsConferencing;
@property (nonatomic) BOOL allowsSharing;
@property (nonatomic) BOOL allowsAddToFavorites;
@property (nonatomic) BOOL allowsSendMessage;
@property (nonatomic) BOOL allowsContactBlocking;
@property (nonatomic) BOOL allowsAddingToAddressBook;
@property (nonatomic) BOOL shouldShowLinkedContacts;
@property (nonatomic) BOOL allowsSettingLinkedContactsAsPreferred;
@property (nonatomic) BOOL allowsDeletion;
@property (nonatomic) BOOL allowsActionsModel;
@property (nonatomic) BOOL allowsDisplayModePickerActions;
@property (nonatomic) BOOL allowsEditPhoto;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (nonatomic) BOOL editingProposedInformation;
@property (nonatomic) BOOL hideCardActions;
@property (nonatomic) BOOL isMailVIP;
@property (nonatomic) BOOL showContactBlockingFirst;
@property (retain, nonatomic) NSString *alternateName;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *warningMessage;
@property (retain, nonatomic) NSString *importantMessage;
@property (retain, nonatomic) NSAttributedString *verifiedInfoMessage;
@property (retain, nonatomic) NSString *primaryProperty;
@property (retain, nonatomic) UIView *personHeaderView;
@property (retain, nonatomic) UIViewController *personHeaderViewController;
@property (retain, nonatomic) NSArray *highlightedProperties;
@property (nonatomic) BOOL highlightedPropertyImportant;
@property (retain, nonatomic) CNPolicy *policy;
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier;
@property (nonatomic) BOOL allowsEditInApp;
@property (nonatomic) BOOL shouldDrawNavigationBar;
@property (retain, nonatomic) NSString *initialPrompt;
@property (nonatomic) BOOL layoutPositionallyAfterNavBar;

- (id)init;
- (void).cxx_destruct;
- (id)initForOutOfProcess:(BOOL)a0;

@end
