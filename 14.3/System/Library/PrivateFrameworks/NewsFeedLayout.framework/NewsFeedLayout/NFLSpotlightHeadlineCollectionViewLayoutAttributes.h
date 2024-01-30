@class NSAttributedString;

@interface NFLSpotlightHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes

@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (copy, nonatomic) NSAttributedString *titleAttributedString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)a0;
- (void)populateWithProtobuf:(id)a0 normalizedWithFeedGutter:(double)a1;

@end
