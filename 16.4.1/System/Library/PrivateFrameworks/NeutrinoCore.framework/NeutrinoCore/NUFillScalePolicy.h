@class NSString;

@interface NUFillScalePolicy : NSObject <NUScalePolicy> {
    struct { long long width; long long height; } _size;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTargetPixelSize:(struct { long long x0; long long x1; })a0;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;

@end
