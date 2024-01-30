@class NSArray, SPSearchResultMarker, NSError;

@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (copy, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileURLs:(id)a0 searchResultMarker:(id)a1 error:(id)a2;

@end
