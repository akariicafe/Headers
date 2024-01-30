@class NSString, PXVideoContentProviderLoadingResult, NSDictionary, NSNumber;

@interface PXVideoContentProvider : PXObservable

@property (retain, nonatomic) PXVideoContentProviderLoadingResult *loadingResult;
@property (nonatomic) double loadingProgress;
@property (retain, nonatomic) NSNumber *videoAspectRatio;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSDictionary *analyticsPayload;

- (void).cxx_destruct;
- (void)cancelLoading;
- (id)mutableChangeObject;
- (void)beginLoadingWithPriority:(long long)a0;

@end
