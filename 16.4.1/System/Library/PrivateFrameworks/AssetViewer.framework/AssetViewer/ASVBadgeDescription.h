@class UIImage;

@interface ASVBadgeDescription : NSObject

@property (readonly) struct CGSize { double width; double height; } badgeSize;
@property (readonly) double shadowSize;
@property (readonly) struct CGPoint { double x; double y; } badgeOffset;
@property (readonly) unsigned long long badgeSizeClass;
@property (readonly) UIImage *badgeImage;

+ (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)initWithSizeClass:(unsigned long long)a0;

@end
