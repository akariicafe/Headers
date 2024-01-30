@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject

@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSArray *keyTimes;
@property (readonly, nonatomic) BOOL needPresentationLayerValues;

+ (id)animationValuesWithLayer:(id)a0 key:(id)a1 values:(id)a2;
+ (id)animationValuesWithLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3;
+ (id)animationValuesWithLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3 needPresentationLayerValues:(BOOL)a4;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3 needPresentationLayerValues:(BOOL)a4;

@end
