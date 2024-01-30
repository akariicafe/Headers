@class NSArray;

@interface HKClinicalProviderSearchResultsPage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) long long from;
@property (readonly, nonatomic) long long nextFrom;
@property (readonly, nonatomic) long long size;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithSearchResults:(id)a0;
- (id)initWithSearchResults:(id)a0 from:(long long)a1 nextFrom:(long long)a2 size:(long long)a3;

@end
