@class UIImage, NSString, UIView;

@interface _PXSharedLibrarySettingsItem : NSObject

@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL refusesSelection;

+ (id)itemWithTitle:(id)a0;

- (void).cxx_destruct;

@end
