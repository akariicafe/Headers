@class NSString;

@interface SBHFakeApplicationPlaceholder : NSObject <SBHApplicationPlaceholder>

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *applicationDisplayName;
@property (nonatomic) double progress;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (double)progressPercentForIcon:(id)a0;
- (void).cxx_destruct;
- (long long)progressStateForIcon:(id)a0;

@end
