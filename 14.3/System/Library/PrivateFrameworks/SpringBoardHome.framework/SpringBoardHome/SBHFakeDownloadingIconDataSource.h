@class NSString;

@interface SBHFakeDownloadingIconDataSource : NSObject <SBDownloadingIconDataSource>

@property (copy, nonatomic) NSString *applicationBundleID;
@property (copy, nonatomic) NSString *applicationDisplayName;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isCloudDemoted;
@property (nonatomic) BOOL isPrioritizable;
@property (nonatomic) BOOL isPausable;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isPaused;
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
@property (readonly, nonatomic) Class iconClass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancel;
- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (BOOL)prioritize;
- (void).cxx_destruct;
- (long long)progressStateForIcon:(id)a0;
- (double)progressPercentForIcon:(id)a0;
- (BOOL)pause;
- (BOOL)resume;

@end
