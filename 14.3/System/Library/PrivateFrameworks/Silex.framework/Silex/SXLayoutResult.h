@class SXLayoutBlueprint;
@protocol SXDOM;

@interface SXLayoutResult : NSObject

@property (readonly, nonatomic) SXLayoutBlueprint *blueprint;
@property (readonly, nonatomic) id<SXDOM> DOM;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithLayoutBlueprint:(id)a0 DOM:(id)a1 duration:(double)a2;

@end
