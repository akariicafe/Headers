@class LPCaptionButtonPresentationProperties, NSArray, LPImagePresentationProperties, NSString, LPImage, LPCaptionRowPresentationProperties, NSNumber;

@interface LPCaptionBarPresentationProperties : NSObject {
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
}

@property (readonly, nonatomic) BOOL hasAnyContent;
@property (retain, nonatomic) LPImage *leadingIcon;
@property (nonatomic) struct CGSize { double width; double height; } leadingIconSize;
@property (retain, nonatomic) NSArray *additionalLeadingIcons;
@property (retain, nonatomic) LPImagePresentationProperties *leadingIconProperties;
@property (retain, nonatomic) LPImage *leadingIconBadge;
@property (retain, nonatomic) LPImagePresentationProperties *leadingIconBadgeProperties;
@property (retain, nonatomic) LPImage *trailingIcon;
@property (nonatomic) struct CGSize { double width; double height; } trailingIconSize;
@property (retain, nonatomic) NSArray *additionalTrailingIcons;
@property (retain, nonatomic) LPImagePresentationProperties *trailingIconProperties;
@property (retain, nonatomic) LPImage *trailingIconBadge;
@property (retain, nonatomic) LPImagePresentationProperties *trailingIconBadgeProperties;
@property (nonatomic) long long leadingAccessoryType;
@property (nonatomic) long long trailingAccessoryType;
@property (copy, nonatomic) NSString *buttonCaption;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *aboveTop;
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *top;
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *bottom;
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *belowBottom;
@property (nonatomic) BOOL shouldHighlightIndependently;
@property (retain, nonatomic) NSNumber *minimumHeight;

- (void).cxx_destruct;
- (id)init;
- (id)leftIcon;
- (id)rightIcon;
- (id)leftIconProperties;
- (id)rightIconProperties;
- (void)applyToAllCaptions:(id /* block */)a0;
- (long long)leftAccessoryType;
- (long long)rightAccessoryType;

@end
