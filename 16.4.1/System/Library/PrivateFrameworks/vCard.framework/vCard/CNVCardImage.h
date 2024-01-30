@class NSData, NSDictionary;

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *cropRects;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (struct CGSize { double x0; double x1; })sizeOfImageData:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)describePropertiesWithBuilder:(id)a0;
- (id)initWithData:(id)a0 cropRects:(id)a1;
- (id)initWithData:(id)a0 cropRects:(id)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
