@class NSNumber, NSMutableDictionary, NSValue;

@interface OZARPersonInfo : NSObject

@property (nonatomic) NSNumber *index;
@property (nonatomic) NSMutableDictionary *jointTransforms;
@property (nonatomic) NSValue *transform;
@property (nonatomic) NSValue *worldSize;
@property (nonatomic) NSValue *boundingBox;

- (id)init:(id)a0;
- (id)init;
- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform:(long long)a0;

@end
