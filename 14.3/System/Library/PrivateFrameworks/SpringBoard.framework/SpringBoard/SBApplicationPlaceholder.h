@class NSString, FBSApplicationPlaceholder, NSMutableDictionary, NSMutableSet;
@protocol SBApplicationPlaceholderDelegate;

@interface SBApplicationPlaceholder : NSObject <FBSApplicationPlaceholderObserver, SBDownloadingIconDataSource, BSInvalidatable> {
    BOOL _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
}

@property (readonly, nonatomic) FBSApplicationPlaceholder *placeholderProxy;
@property (weak, nonatomic) id<SBApplicationPlaceholderDelegate> delegate;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (readonly, nonatomic) Class iconClass;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;

+ (id)backgroundQueue;

- (BOOL)cancel;
- (unsigned long long)installType;
- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (id)formattedAccessoryStringForIcon:(id)a0;
- (unsigned long long)priorityForIcon:(id)a0;
- (BOOL)isDone;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (BOOL)prioritize;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)iconCanTightenLabel:(id)a0;
- (void)placeholderProgressDidUpdate:(id)a0;
- (void)placeholderDidChangeSignificantly:(id)a0;
- (BOOL)iconSupportsUninstall:(id)a0;
- (long long)progressStateForIcon:(id)a0;
- (double)progressPercentForIcon:(id)a0;
- (BOOL)isProgressPausedForIcon:(id)a0;
- (id)badgeNumberOrStringForIcon:(id)a0;
- (BOOL)pause;
- (BOOL)iconCompleteUninstall:(id)a0;
- (BOOL)iconCanTruncateLabel:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)resume;
- (void)invalidate;
- (long long)accessoryTypeForIcon:(id)a0;
- (long long)labelAccessoryTypeForIcon:(id)a0;
- (void)_progressChanged;
- (BOOL)_shouldDisplayAppName;
- (void)_reloadThumbnailImage;
- (id)_iconImageKeyForBundleID:(id)a0 info:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (void)_generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)_generatePendingIconFormats;
- (BOOL)_shouldDisplayAppNameAtIconLocation:(id)a0;
- (id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithPlaceholderProxy:(id)a0;
- (BOOL)isStoreDownload;

@end
