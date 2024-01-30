@class NSString;

@interface CUINamedImageDescription : NSObject

@property (nonatomic) double scale;
@property (nonatomic) long long idiom;
@property (nonatomic) long long subtype;
@property (nonatomic) long long sizeClassHorizontal;
@property (nonatomic) long long sizeClassVertical;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) long long imageType;
@property (nonatomic) struct { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct { double top; double left; double bottom; double right; } alignmentEdgeInsets;
@property (nonatomic) long long resizingMode;
@property (nonatomic) int exifOrientation;
@property (nonatomic) long long displayGamut;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) NSString *appearanceName;

- (id)description;
- (void)dealloc;

@end
