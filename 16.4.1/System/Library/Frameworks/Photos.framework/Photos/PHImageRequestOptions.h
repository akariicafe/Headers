@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying> {
    int _requestID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL cannotReturnSmallerImage;
@property (nonatomic) BOOL ignoreProcessWideRepairLimits;
@property (nonatomic) long long loadingMode;
@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL allowSecondaryOpportunisticImage;
@property (nonatomic) BOOL includeHDRGainMap;
@property (nonatomic) BOOL includeHDRGainMapInIntermediateImage;
@property (nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (copy, nonatomic) id /* block */ cachingCompleteHandler;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL useLimitedLibraryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct CGSize { double width; double height; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoFrameTime;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (copy, nonatomic) id /* block */ progressHandler;

+ (id)defaultOptionsAllowingPlaceholder;

@end
