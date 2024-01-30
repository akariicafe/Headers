@class NSString, IKOrdinalElement, IKTextElement, NSArray, IKTextBadgeAttachment, IKImageElement, IKVideoElement, IKButtonElement;

@interface IKColumnItemLockupElement : IKViewElement

@property (readonly, copy, nonatomic) NSString *columnItemType;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *secondarySubtitle;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, nonatomic) IKImageElement *image;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) IKTextBadgeAttachment *titleBadge;
@property (readonly, nonatomic) IKTextBadgeAttachment *subtitleBadge;
@property (readonly, retain, nonatomic) IKButtonElement *button;
@property (readonly, retain, nonatomic) IKVideoElement *video;
@property (readonly, retain, nonatomic) NSArray *textElements;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (readonly, nonatomic) BOOL isWatchlisted;
@property (readonly, nonatomic) BOOL onlyVisibleOnColumnHighlight;

- (void)_computeTitle:(id *)a0 subtitle:(id *)a1 secondarySubtitle:(id *)a2 unstyledTextElements:(id *)a3;

@end
