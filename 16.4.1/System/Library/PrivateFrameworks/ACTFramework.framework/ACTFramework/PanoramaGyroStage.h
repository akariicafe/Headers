@class NSDictionary, NSString;

@interface PanoramaGyroStage : NSObject <ImageBufferProcessor> {
    double _curTime;
    BOOL _isTranslationValid;
    BOOL _isGyroDataValid;
    void /* unknown type, empty encoding */ _translationRate;
    void /* unknown type, empty encoding */ _translation;
    void /* unknown type, empty encoding */ _rotation;
    void /* unknown type, empty encoding */ _txty;
    struct { void /* unknown type, empty encoding */ columns[3]; } _transformMatrix;
    float _focalLength;
    float _sliceHeight;
    float _sliceWidth;
    int _motionSource;
}

@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)resetState;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (int)purgeResources;
- (int)process;
- (id)init;
- (void).cxx_destruct;
- (struct { void /* unknown type, empty encoding */ x0[3]; })ISPMotionToHomography;
- (struct { void /* unknown type, empty encoding */ x0[3]; })toHomography;
- (struct { void /* unknown type, empty encoding */ x0[3]; })transformToHomography;
- (struct { void /* unknown type, empty encoding */ x0[3]; })translationToHomography;
- (int)update:(id)a0 sliceType:(int)a1 sliceWidth:(float)a2 sliceHeight:(float)a3 sliceID:(int)a4;
- (int)updateWithDebugISPMedian:(struct { unsigned int x0; unsigned int x1; struct { unsigned long long x0; unsigned long long x1; unsigned short x2; union { unsigned char x0[64]; struct { unsigned short x0; unsigned short x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; } x1; struct { unsigned short x0; unsigned short x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; unsigned short x16; unsigned short x17; int x18; int x19; int x20; int x21; } x2; } x3; } x2[0]; } *)a0;
- (int)updateWithTransformMatrix:(float *)a0 sliceType:(int)a1;
- (int)updateWithTranslation:(float *)a0 sliceType:(int)a1;

@end
