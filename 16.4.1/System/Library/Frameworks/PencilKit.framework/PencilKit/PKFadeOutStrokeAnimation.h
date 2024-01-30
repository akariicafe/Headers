@class UIColor, PKStroke;

@interface PKFadeOutStrokeAnimation : NSObject {
    UIColor *_startColor;
}

@property (readonly, nonatomic) PKStroke *stroke;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithStroke:(id)a0 startTime:(double)a1 duration:(double)a2;
- (BOOL)isDoneAtTime:(double)a0;
- (id)newStrokeAtTime:(double)a0;

@end
