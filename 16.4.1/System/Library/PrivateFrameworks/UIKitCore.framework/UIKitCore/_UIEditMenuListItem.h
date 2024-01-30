@class NSString, UIMenuElement, UIImage, UISPasteVariant, UIView;

@interface _UIEditMenuListItem : NSObject

@property (readonly, nonatomic) UIMenuElement *menuElement;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UISPasteVariant *pasteVariant;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) UIView *customView;
@property (nonatomic) double overrideMinimumWidth;
@property (nonatomic) unsigned long long displayMode;

+ (id)itemWithMenuElement:(id)a0;
+ (id)itemWithTitle:(id)a0;

- (void).cxx_destruct;
- (BOOL)hidesImageForTraitCollection:(id)a0;
- (BOOL)hidesTitleForTraitCollection:(id)a0;

@end
