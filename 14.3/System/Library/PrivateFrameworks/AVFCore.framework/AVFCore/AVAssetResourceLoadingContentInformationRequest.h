@class NSString, NSArray, NSDate, AVAssetResourceLoadingContentInformationRequestInternal;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

@property (copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *allowedContentTypes;
@property (nonatomic) long long contentLength;
@property (nonatomic, getter=isByteRangeAccessSupported) BOOL byteRangeAccessSupported;
@property (copy, nonatomic) NSDate *renewalDate;

- (id)propertyList;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isDiskCachingPermitted;
- (id)initWithLoadingRequest:(id)a0 allowedContentTypes:(id)a1;
- (void)setDiskCachingPermitted:(BOOL)a0;
- (BOOL)isEntireLengthAvailableOnDemand;
- (void)setEntireLengthAvailableOnDemand:(BOOL)a0;

@end
