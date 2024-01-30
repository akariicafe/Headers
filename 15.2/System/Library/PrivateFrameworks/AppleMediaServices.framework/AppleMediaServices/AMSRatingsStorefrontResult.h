@class NSArray;

@interface AMSRatingsStorefrontResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts;

- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)a0;
- (id)initWithDictionaries:(id)a0 mediaType:(unsigned long long)a1;
- (id)_mapRatingsDictionaries:(id)a0 withMediaType:(unsigned long long)a1;
- (id)initWithURLResult:(id)a0 mediaType:(unsigned long long)a1;
- (id)initWithData:(id)a0 mediaType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
