@class NSNumber, NSValue, NSUUID;

@interface OZARPlaneInfo : NSObject

@property (nonatomic) NSNumber *alignment;
@property (nonatomic) NSNumber *classification;
@property (nonatomic) NSValue *extent;
@property (nonatomic) NSValue *center;
@property (nonatomic) NSValue *transform;
@property (nonatomic) NSUUID *identifier;

- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform;

@end
