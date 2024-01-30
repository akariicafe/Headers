@class SPSearchResultMarker;

@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
