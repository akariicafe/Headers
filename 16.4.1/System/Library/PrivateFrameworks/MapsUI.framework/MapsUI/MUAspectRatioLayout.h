@class MUAspectRatioLayoutInternal;
@protocol MULayoutItem;

@interface MUAspectRatioLayout : MUConstraintLayout {
    MUAspectRatioLayoutInternal *_internal;
}

@property (weak, nonatomic) id<MULayoutItem> item;
@property (nonatomic) double aspectRatio;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 aspectRatio:(double)a1;

@end
