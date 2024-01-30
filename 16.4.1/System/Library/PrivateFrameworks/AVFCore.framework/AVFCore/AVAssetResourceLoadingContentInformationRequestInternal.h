@class NSString, NSArray, NSDate;

@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject {
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    BOOL entireLengthAvailableOnDemand;
    BOOL byteRangeAccessSupported;
    NSDate *renewalDate;
    BOOL diskCachingPermitted;
}

@end
