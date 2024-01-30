@class NSDictionary, NSString;

@interface PanoramaGyroStage : NSObject <ImageBufferProcessor> {
    BOOL _sensorCoordinateSystem;
}

@property (nonatomic) BOOL isTranslationValid;
@property (nonatomic) BOOL isGyroDataValid;
@property (nonatomic) void /* unknown type, empty encoding */ translationRate;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (nonatomic) void /* unknown type, empty encoding */ rotation;
@property (nonatomic) double curTime;
@property (nonatomic) void /* unknown type, empty encoding */ txty;
@property (nonatomic) float focalLength;
@property (nonatomic) float sliceRatio;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)resetState;
- (int)finishProcessing;
- (id)init;
- (struct { void /* unknown type, empty encoding */ x0[3]; })toHomography;
- (int)update:(id)a0 sliceType:(int)a1 sliceWidth:(float)a2 sliceHeight:(float)a3 sliceID:(int)a4;
- (int)updateWithMedian:(struct { unsigned int x0; unsigned int x1; struct { unsigned long long x0; unsigned long long x1; unsigned short x2; union { unsigned char x0[64]; struct { unsigned short x0; unsigned short x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; } x1; struct { unsigned short x0; unsigned short x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; } x2; } x3; } x2[0]; } *)a0;
- (int)updateWithCoreMotion:(float *)a0 sliceType:(int)a1 sliceWidth:(float)a2 sliceWidth:(float)a3 scale:(float)a4;

@end
