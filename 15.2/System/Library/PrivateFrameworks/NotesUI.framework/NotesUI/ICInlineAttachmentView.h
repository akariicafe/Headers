@class NSString, CADisplayLink, UIImage, ICAttributedStringRippler, NSDictionary, NSRegularExpression, UILabel, ICInlineTextAttachment;
@protocol ICInlineAttachmentViewAnimationDelegate;

@interface ICInlineAttachmentView : UIView <ICAttachmentViewInitializing>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CADisplayLink *rippleAnimationTimer;
@property (retain, nonatomic) ICAttributedStringRippler *rippler;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment;
@property (nonatomic) double textContainerWidth;
@property (copy, nonatomic) NSDictionary *surroundingAttributes;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) UIImage *imageForPrinting;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (weak, nonatomic) id<ICInlineAttachmentViewAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityAttributedLabel;
- (void)dealloc;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1;
- (void)updateStyleWithAttributes:(id)a0;
- (void)attachmentDataChanged:(id)a0;
- (void)objectDidUpdateShare:(id)a0;
- (id)createNewLabel;
- (void)beginRippleAnimation;
- (void)endRippleAnimation;
- (void)updateRippleAnimation;
- (void)updateHighlightsWithAttributes:(id)a0;
- (void)animateInsertionIfNecessary;

@end
