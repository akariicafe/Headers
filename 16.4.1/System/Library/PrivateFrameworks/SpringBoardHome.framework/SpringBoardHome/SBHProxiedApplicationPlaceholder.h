@class NSString, FBSApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSNumber;
@protocol SBHProxiedApplicationPlaceholderDelegate;

@interface SBHProxiedApplicationPlaceholder : NSObject <FBSApplicationPlaceholderObserver, SBHApplicationPlaceholder, BSInvalidatable, BSDescriptionProviding> {
    BOOL _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
}

@property (readonly, nonatomic) BOOL canBeShared;
@property (readonly, nonatomic) FBSApplicationPlaceholder *placeholderProxy;
@property (weak, nonatomic) id<SBHProxiedApplicationPlaceholderDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, copy, nonatomic) NSNumber *applicationItemID;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, nonatomic, getter=isNewAppInstallFromStore) BOOL newAppInstallFromStore;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;

+ (id)backgroundQueue;

- (BOOL)iconCompleteUninstall:(id)a0;
- (long long)labelAccessoryTypeForIcon:(id)a0;
- (BOOL)iconCanTightenLabel:(id)a0;
- (unsigned long long)installType;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (unsigned long long)priorityForIcon:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)progressStateForIcon:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (BOOL)isDone;
- (BOOL)pause;
- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (BOOL)iconCanTruncateLabel:(id)a0;
- (double)progressPercentForIcon:(id)a0;
- (BOOL)cancel;
- (void)dealloc;
- (BOOL)prioritize;
- (BOOL)isEqual:(id)a0;
- (BOOL)isProgressPausedForIcon:(id)a0;
- (id)succinctDescription;
- (BOOL)iconSupportsUninstall:(id)a0;
- (id)badgeNumberOrStringForIcon:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)resume;
- (unsigned long long)_expectedFinalInstallPhase;
- (void)placeholderDidChangeSignificantly:(id)a0;
- (void)placeholderProgressDidUpdate:(id)a0;
- (void)_progressChanged;
- (BOOL)isStoreDownload;
- (void)_generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)_generatePendingIconFormats;
- (id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)_iconImageKeyForBundleID:(id)a0 info:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (void)_reloadThumbnailImage;
- (long long)accessoryTypeForIcon:(id)a0;
- (id)formattedAccessoryStringForIcon:(id)a0;
- (id)icon:(id)a0 statusDescriptionForLocation:(id)a1;
- (id)initWithPlaceholderProxy:(id)a0;

@end
