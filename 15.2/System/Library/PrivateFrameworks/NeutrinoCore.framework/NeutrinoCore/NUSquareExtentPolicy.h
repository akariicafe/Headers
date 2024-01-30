@class NSString;

@interface NUSquareExtentPolicy : NSObject <NUExtentPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })extentForImageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;

@end
