@interface UIKeyboardEmojiGraphicsTraits : NSObject

@property (readonly, nonatomic) double emojiKeyWidth;
@property (readonly, nonatomic) double minimumLineSpacing;
@property (readonly, nonatomic) double minimumInteritemSpacing;
@property (readonly, nonatomic) double columnOffset;
@property (readonly, nonatomic) double sectionOffset;
@property (readonly, nonatomic) double bottomPadding;
@property (readonly, nonatomic) double categoryHeaderHeight;
@property (readonly, nonatomic) double categoryHeaderLeftPadding;
@property (readonly, nonatomic) double categorySelectedCirWidth;
@property (readonly, nonatomic) double scrubViewTopPadding;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fakeEmojiKeySize;
@property (readonly, nonatomic) double categoryHeaderFontSize;
@property (readonly, nonatomic) long long prepolulatedRecentCount;
@property (readonly, nonatomic) double inputViewLeftMostPadding;
@property (readonly, nonatomic) double inputViewRightMostPadding;
@property (readonly, nonatomic) double rightBiasPercentage;
@property (readonly, nonatomic) double alertTextWidth;
@property (readonly, nonatomic) double scrollSnapOffset;

+ (id)emojiGraphicsTraitsForCurrentScreenTraits;
+ (id)emojiGraphicsTraitsWithScreenTraits:(id)a0;

- (id)initWithScreenTrait:(id)a0;

@end
