@class NSString, NSMutableDictionary;

@interface PXStoryMovieHighlightsConcreteCollection : NSObject <PXStoryMovieHighlightsCollection, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_highlightsByAssetId;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)movieHighlightsForDisplayAsset:(id)a0;

@end
