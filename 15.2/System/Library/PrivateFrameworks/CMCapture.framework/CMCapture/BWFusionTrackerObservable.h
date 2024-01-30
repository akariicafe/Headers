@class NSString, NSDictionary;

@interface BWFusionTrackerObservable : NSObject <FTObservable> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _box;
    long long _objectKind;
    float _confidence;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastDetectionTimestamp;
    NSDictionary *_metadata;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })box;
- (unsigned long long)identifier;
- (float)confidence;
- (id)metadata;
- (void)dealloc;
- (long long)objectKind;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })frameTimestamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastDetectionTimestamp;
- (id)initWithKind:(long long)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 identifier:(unsigned long long)a4 metadata:(id)a5;

@end
