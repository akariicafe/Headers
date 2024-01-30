@interface SKUITracklistColumn : NSObject <NSCopying>

@property (nonatomic) double width;
@property (nonatomic) long long columnIdentifier;
@property (nonatomic) BOOL showsPreviewControl;
@property (nonatomic) BOOL sizesToFit;
@property (nonatomic) long long contentAlignment;
@property (nonatomic) long long headerAlignment;
@property (nonatomic) double maximumWidthFraction;
@property (nonatomic) double preferredWidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setPreferredWidthForAttributedStrings:(id)a0;

@end
