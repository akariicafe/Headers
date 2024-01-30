@class NSArray;

@interface AMSRatingsProviderResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts;

- (id)initWithDictionaries:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (id)_mapRatingsDictionaries:(id)a0 withMediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)a0;
- (id)initWithURLResult:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (id)initWithData:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (void).cxx_destruct;

@end
