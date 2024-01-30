@interface PHDetectionTrait : NSObject

@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) short value;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;

+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)a0;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)a0 withDetectionTraitTypes:(id)a1;
+ (id)detectionTraitsForDetection:(id)a0;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)initWithType:(short)a0 value:(short)a1 score:(double)a2 startTime:(double)a3 duration:(double)a4;

@end
