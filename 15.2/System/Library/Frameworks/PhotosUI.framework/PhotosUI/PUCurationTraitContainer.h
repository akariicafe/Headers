@class NSString;

@interface PUCurationTraitContainer : NSObject

@property (readonly, nonatomic) NSString *actionLabel;
@property (readonly, nonatomic) short value;
@property (readonly, nonatomic) double highPrecisionOperatingPoint;
@property (readonly, nonatomic) double operatingPoint;
@property (readonly, nonatomic) double highRecallOperatingPoint;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 traitValue:(short)a1 highPrecision:(double)a2 operatingPoint:(double)a3 highRecall:(double)a4;

@end
