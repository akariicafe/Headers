@class NSString, BlastDoorPassPreview_PassColor, BlastDoorPassPreview_HeaderImage;

@interface BlastDoorPassPreview : NSObject {
    void /* unknown type, empty encoding */ passPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_HeaderImage *headerImage;
@property (nonatomic, readonly) BlastDoorPassPreview_PassColor *backgroundColor;
@property (nonatomic, readonly) BlastDoorPassPreview_PassColor *footerColor;
@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassColor *primaryColor;
@property (nonatomic, readonly) NSString *secondaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassColor *secondaryColor;
@property (nonatomic, readonly) NSString *tertiaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassColor *tertiaryColor;

- (id)init;
- (void).cxx_destruct;

@end
