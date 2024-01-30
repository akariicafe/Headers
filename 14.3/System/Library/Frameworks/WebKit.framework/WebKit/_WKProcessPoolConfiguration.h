@class NSSet, NSString, NSURL, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { struct type { unsigned char __lx[160]; } data; } _processPoolConfiguration;
}

@property (copy, nonatomic) NSURL *injectedBundleURL;
@property (copy, nonatomic) NSSet *customClassesForParameterCoder;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) BOOL usesSingleWebProcess;
@property (copy, nonatomic) NSString *customWebContentServiceBundleIdentifier;
@property (nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic) BOOL attrStyleEnabled;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) unsigned long long wirelessContextIdentifier;
@property (nonatomic) long long diskCacheSizeOverride;
@property (copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property (copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) BOOL diskCacheSpeculativeValidationEnabled;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL shouldCaptureAudioInUIProcess;
@property (nonatomic) BOOL alwaysRunsAtBackgroundPriority;
@property (nonatomic) BOOL shouldTakeUIBackgroundAssertion;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) BOOL processSwapsOnNavigation;
@property (nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses;
@property (nonatomic) BOOL processSwapsOnWindowOpenWithOpener;
@property (nonatomic) BOOL prewarmsProcessesAutomatically;
@property (nonatomic) BOOL usesWebProcessCache;
@property (nonatomic) BOOL pageCacheEnabled;
@property (nonatomic, getter=isJITEnabled) BOOL JITEnabled;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (nonatomic) BOOL configureJSCForTesting;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
