@class NSArray, NSDictionary, MPStoreArtworkRequestToken, NSString;

@interface MPStoreItemMovieClip : NSObject

@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) MPStoreArtworkRequestToken *previewArtworkRequestToken;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)a0;

@end
