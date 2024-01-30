@interface Prediction : NSObject

@property (nonatomic) double noneScore;
@property (readonly, nonatomic) double doubleTapScore;
@property (readonly, nonatomic) double tripleTapScore;
@property (readonly, nonatomic) double maxConfidence;
@property (nonatomic) unsigned long long predictedClass;

- (id)description;
- (id)initWithModelOutput:(id)a0;

@end
