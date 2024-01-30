@class NSString, NSArray, SLMicroBlogUserRecord, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, NSObject, SLMicroBlogMentionsViewController, SLPlace;
@protocol SLMicroBlogSheetDelegate;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {
    NSObject<SLMicroBlogSheetDelegate> *_microBlogSheetDelegate;
    NSString *_serviceAccountTypeIdentifier;
    SLMicroBlogMentionsViewController *_mentionsViewController;
    unsigned long long _mentionStartLocation;
    BOOL _mentionPendingStart;
    BOOL _rotatedDuringAccountsPopover;
    BOOL _usingLocationOverride;
    NSArray *_accountUserRecords;
    NSArray *_accountIdentifiers;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    SLComposeSheetConfigurationItem *_accountConfigurationItem;
    SLComposeSheetConfigurationItem *_locationConfigurationItem;
    SLMicroBlogAccountsTableViewController *_accountViewController;
    SLSheetPlaceViewController *_placeViewController;
    SLPlace *_currentPlace;
    long long _shortenedURLCost;
    long long _maxURLLength;
    BOOL _isPresentingPlaces;
}

@property (weak) NSObject<SLMicroBlogSheetDelegate> *microBlogSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceBundle;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)isContentValid;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)appWillEnterForeground:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)placeViewController:(id)a0 didSelectPlace:(id)a1;
- (void)placeViewController:(id)a0 willDisappear:(BOOL)a1;
- (void)updateShortenedURLCost;
- (void)noteLocationInfoChanged:(id)a0;
- (void)updateGeotagStatus;
- (void)_beginLoadingAccountProfileImages;
- (void)_presentAccountPickerController;
- (void)setGeotagStatus:(int)a0;
- (void)_presentPlaceViewController;
- (void)_performLocationAction;
- (id)_accountConfigurationItem;
- (id)_locationConfigurationItem;
- (void)_presentNoAccountsAlertIfNecessaryAndReady;
- (void)presentNoAccountsAlert;
- (int)characterCountForEnteredText:(id)a0 attachments:(id)a1;
- (int)_charactersRemainingWithText:(id)a0;
- (id)completeText:(id)a0 withAttachments:(id)a1;
- (long long)_characterCountForText:(id)a0;
- (BOOL)_countMediaAttachmentsTowardCharacterCount;
- (id)_placeViewController;
- (id)_mentionsSearchString;
- (void)_presentMentionsViewControllerWithSearchString:(id)a0;
- (void)applyMention:(id)a0;
- (void)_dismissMentionsViewController;
- (void)didSelectPost;
- (void)_presentMentionsViewControllerIfApplicableForSearchString:(id)a0;
- (void)mentionsViewController:(id)a0 finishedWithResult:(id)a1;
- (void)accountsViewController:(id)a0 didSelectAccountUserRecord:(id)a1;
- (id)configurationItems;
- (void)presentationAnimationDidFinish;

@end
