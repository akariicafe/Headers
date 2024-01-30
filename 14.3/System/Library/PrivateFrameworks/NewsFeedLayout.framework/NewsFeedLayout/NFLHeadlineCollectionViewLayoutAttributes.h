@class UIColor, NSString;

@interface NFLHeadlineCollectionViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } selectionInset;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } numberedCircleFrame;
@property (retain, nonatomic) UIColor *numberedCircleColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) long long titleTextAlignment;
@property (retain, nonatomic) NSString *titleFontName;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleLineHeight;
@property (retain, nonatomic) UIColor *publisherLogoColor;
@property (nonatomic) long long publisherLogoContentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } excerptFrame;
@property (retain, nonatomic) NSString *excerptFontName;
@property (nonatomic) double excerptFontSize;
@property (nonatomic) double excerptLineHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessoryViewFrame;
@property (nonatomic) long long accessoryContentMode;
@property (retain, nonatomic) NSString *accessoryFontName;
@property (nonatomic) double accessoryViewBottomPadding;
@property (nonatomic) double accessoryViewTopPadding;
@property (nonatomic) double accessoryContentViewLeftPadding;
@property (nonatomic) double accessoryContentViewRightPadding;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } segmentedColorViewFrame;
@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic) unsigned long long segmentedColorViewDirection;
@property (retain, nonatomic) UIColor *accessoryFontColor;
@property (retain, nonatomic) UIColor *accessoryIconColor;
@property (nonatomic) double accessoryFontSize;
@property (nonatomic) double accessoryLineHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sharrowFrame;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } publisherLogoFrame;
@property (nonatomic) long long imagePosition;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) double minimumHeightBetweenLowestTextFrameAndBottomOfContent;
@property (nonatomic) BOOL shouldAdjustPublisherLogo;
@property (nonatomic) BOOL layoutHasTooMuchWhiteSpaceInCurrentState;
@property (nonatomic) double whiteSpace;
@property (nonatomic) BOOL titleTruncates;

+ (id)zeroHeightLayoutAttributesWithFeedSettings:(id)a0;
+ (id)nfl_layoutAttributesForWidgetProperties:(id)a0 feedSettings:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)a0;
- (unsigned long long)hash;
- (void)populateWithProtobuf:(id)a0 normalizedWithFeedGutter:(double)a1;
- (BOOL)isEqual:(id)a0;

@end
