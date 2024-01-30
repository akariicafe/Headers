@class NSString, NSArray, AXMDataPointValue, NSNumber, NSAttributedString;

@interface AXMDataPoint : NSObject <NSCopying>

@property (copy, nonatomic) AXMDataPointValue *timeEncodingValue;
@property (copy, nonatomic) NSNumber *pitchEncodingValue;
@property (copy, nonatomic) NSNumber *volumeEncodingValue;
@property (copy, nonatomic) NSNumber *durationEncodingValue;
@property (copy, nonatomic) NSString *timbreEncodingValue;
@property (nonatomic) double playbackTimeOffsetMS;
@property (copy, nonatomic) AXMDataPointValue *xValue;
@property (copy, nonatomic) AXMDataPointValue *yValue;
@property (copy, nonatomic) NSArray *additionalValues;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSAttributedString *attributedLabel;
@property (copy, nonatomic) NSString *valueDescription;
@property (readonly, nonatomic) AXMDataPointValue *zCategoryAxisValue;
@property (readonly, nonatomic) AXMDataPointValue *zNumericAxisValue;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithX:(id)a0 y:(id)a1;
- (id)initWithX:(id)a0 y:(id)a1 additionalValues:(id)a2 label:(id)a3;
- (id)initWithX:(id)a0 y:(id)a1 additionalValues:(id)a2;

@end
