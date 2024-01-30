@interface MSStickerBrowserViewLayoutSpec : NSObject

@property (readonly, nonatomic) long long stickerSize;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } itemSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;
@property (readonly, nonatomic) double minimumInteritemSpacing;
@property (readonly, nonatomic) double minimumLineSpacing;

+ (id)specWithSizeClass:(long long)a0 interfaceOrientation:(long long)a1;

- (id)initWithSize:(long long)a0 interfaceOrientation:(long long)a1;

@end
