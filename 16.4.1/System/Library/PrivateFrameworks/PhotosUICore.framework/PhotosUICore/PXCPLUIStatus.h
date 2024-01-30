@class NSString;

@interface PXCPLUIStatus : NSObject

@property (retain, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *failureDescription;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float progress;
@property (retain, nonatomic) NSString *referencedItemsDescription;
@property (retain, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertTitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (retain, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long serviceAction;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long activity;
@property (nonatomic) long long pauseReason;
@property (nonatomic) BOOL inResetSync;
@property (nonatomic) BOOL isRestoringLibrary;
@property (nonatomic) BOOL hasCompletedInitialSync;
@property (nonatomic) BOOL isExiting;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
