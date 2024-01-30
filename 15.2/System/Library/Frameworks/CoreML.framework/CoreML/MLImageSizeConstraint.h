@class NSOrderedSet, NSArray;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *imageSizeSet;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pixelsWideRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pixelsHighRange;
@property (readonly, nonatomic) NSArray *enumeratedImageSizes;

+ (unsigned long long)locationClosestTo:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)closestImageSizeInArray:(id)a0 toImageSize:(id)a1 preferDownScaling:(BOOL)a2;
+ (id)closestImageSizeInPixelsWideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 pixelsHighRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toImageSize:(id)a2 preferInputAspectRatio:(BOOL)a3;

- (id)initWithEnumeratedImageSizes:(id)a0;
- (id)initWithPixelsWideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 pixelsHighRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)encodeWithCoder:(id)a0;
- (id)allowedImageSizeClosestToPixelsWide:(long long)a0 pixelsHigh:(long long)a1 preferDownScaling:(BOOL)a2 preferInputAspectRatio:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isAllowedImageSize:(id)a0 error:(id *)a1;
- (id)initUnspecified;

@end
