@class INIntent, NSString, INInteraction, UIImage, NSUserActivity, INRelevantShortcut;

@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying> {
    UIImage *_bodyImage;
    BOOL _isUsingPlaceholderArtwork;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *remoteBundleIdentifier;
@property (readonly, nonatomic) NSString *localBundleIdentifier;
@property (readonly, nonatomic) unsigned long long donationType;
@property (readonly, nonatomic, getter=isLocalDonation) BOOL localDonation;
@property (readonly, nonatomic) unsigned long long actionIdentifier;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) UIImage *appIcon;
@property (readonly, nonatomic) UIImage *fullsizeAppIcon;
@property (readonly, nonatomic) BOOL displayAppName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *bodyImage;
@property (readonly, nonatomic) UIImage *monochromeBodyImage;
@property (readonly, nonatomic) NSString *bodyImageCompositingFilter;
@property (readonly, nonatomic) INInteraction *interaction;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INRelevantShortcut *relevantShortcut;
@property (readonly, nonatomic) BOOL requiresRemoteExecution;
@property (readonly, nonatomic) BOOL supportsLocalIntentExecution;
@property (readonly, nonatomic) BOOL isMediaDonation;
@property (readonly, nonatomic) BOOL isWorkoutDonation;
@property (readonly, nonatomic) BOOL isBeginWorkoutDonation;
@property (readonly, nonatomic) BOOL isEndWorkoutDonation;
@property (readonly, nonatomic) BOOL isRunWorkflowDonation;
@property (readonly, nonatomic) BOOL supportsBackgroundExecution;

+ (void)createWithDonatedAction:(id)a0 completion:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)_hasLocalExtensionForIntentExecution;
- (BOOL)_isMusicDonation;
- (BOOL)_isPodcastsDonation;
- (void)_loadAppContentPropertiesWithCompletion:(id /* block */)a0;
- (void)_loadContentForIntent:(id)a0 completion:(id /* block */)a1;
- (void)_loadContentForRelevantShortcut:(id)a0 completion:(id /* block */)a1;
- (void)_loadContentForUserActivity:(id)a0 completion:(id /* block */)a1;
- (void)_loadContentForUserActivityOnShortcut:(id)a0 completion:(id /* block */)a1;
- (id)_placeholderImageNameForBundleID:(id)a0;
- (id)_scaleImageForDisplay:(id)a0;
- (void)loadForAction:(id)a0 completion:(id /* block */)a1;

@end
