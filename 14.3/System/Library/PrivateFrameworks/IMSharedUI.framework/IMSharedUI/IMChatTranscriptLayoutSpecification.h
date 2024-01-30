@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } layoutBoundsSize;
@property (nonatomic) double maximumBubbleWidth;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double zeroVerticalItemSpacing;
@property (nonatomic) double smallVerticalItemSpacing;
@property (nonatomic) double mediumVerticalItemSpacing;
@property (nonatomic) double largeVerticalItemSpacing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
