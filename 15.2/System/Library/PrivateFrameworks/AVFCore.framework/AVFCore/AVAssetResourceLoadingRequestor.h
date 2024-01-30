@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {
    AVAssetResourceLoadingRequestorInternal *_requestor;
}

@property (readonly, nonatomic) BOOL providesExpiredSessionReports;

- (id)initWithRequestInfo:(struct __CFDictionary { } *)a0;
- (void)dealloc;

@end
