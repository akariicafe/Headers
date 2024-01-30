@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {
    AVAssetResourceLoadingRequestorInternal *_requestor;
}

@property (readonly, nonatomic) BOOL providesExpiredSessionReports;

- (void)dealloc;
- (id)initWithRequestInfo:(struct __CFDictionary { } *)a0;

@end
