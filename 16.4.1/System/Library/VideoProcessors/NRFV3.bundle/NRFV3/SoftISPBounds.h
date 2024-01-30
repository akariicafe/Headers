@interface SoftISPBounds : NSObject {
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _processingRegionWithinSensorInReadoutPixels;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _processingRegionWithinSensorInBayerPixels;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _processingRegionWithinInputBufferInPixels;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _processingRegionWithinOutputBufferInPixels;
}

- (id)initWithInputFrame:(id)a0 outputFrame:(id)a1 quadraBinned:(BOOL)a2;

@end
