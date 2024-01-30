@class NSString, NSURL, UIImage, LPImage;

@interface PKActivityItemSource : NSObject <UIActivityItemSource> {
    NSString *_title;
    NSString *_subtitle;
    NSURL *_iconURL;
    UIImage *_iconImage;
    LPImage *_icon;
}

@property (retain, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionableItemWithValue:(id)a0;
+ (id)placeholderURLItemWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
+ (id)placeholderURLItemWithTitle:(id)a0 subtitle:(id)a1 iconURL:(id)a2 iconPlaceholder:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2 value:(id)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconURL:(id)a2 iconPlaceholder:(id)a3 value:(id)a4;

@end
