@class NSString, AXDataPointValue, NSArray, NSNumber, NSAttributedString;

@interface AXDataPoint : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timeEncodingValue;
@property (copy, nonatomic) NSNumber *pitchEncodingValue;
@property (copy, nonatomic) NSNumber *volumeEncodingValue;
@property (copy, nonatomic) NSNumber *durationEncodingValue;
@property (copy, nonatomic) NSString *categoryEncodingValue;
@property (copy, nonatomic) NSString *valueDescription;
@property (copy, nonatomic) AXDataPointValue *xValue;
@property (copy, nonatomic) AXDataPointValue *yValue;
@property (copy, nonatomic) NSArray *additionalValues;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSAttributedString *attributedLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithX:(id)a0 y:(id)a1;
- (id)initWithX:(id)a0 y:(id)a1 additionalValues:(id)a2;
- (id)initWithX:(id)a0 y:(id)a1 additionalValues:(id)a2 label:(id)a3;
- (id)_additionalCategoricalValue;
- (id)_additionalNumericValue;

@end
