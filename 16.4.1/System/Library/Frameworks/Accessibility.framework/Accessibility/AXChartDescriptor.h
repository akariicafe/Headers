@class NSArray, NSUUID, NSString, AXNumericDataAxisDescriptor, NSAttributedString;
@protocol AXDataAxisDescriptor;

@interface AXChartDescriptor : NSObject <AXDictionaryRepresentable, NSCopying>

@property (copy, nonatomic) NSArray *annotations;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) long long contentDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (copy, nonatomic) NSArray *series;
@property (retain, nonatomic) id<AXDataAxisDescriptor> xAxis;
@property (retain, nonatomic) AXNumericDataAxisDescriptor *yAxis;
@property (copy, nonatomic) NSArray *additionalAxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_commonInitWithSummary:(id)a0 xAxisDescriptor:(id)a1 yAxisDescriptor:(id)a2 additionalAxes:(id)a3 series:(id)a4;
- (id)initWithAttributedTitle:(id)a0 summary:(id)a1 xAxisDescriptor:(id)a2 yAxisDescriptor:(id)a3 additionalAxes:(id)a4 series:(id)a5;
- (id)initWithAttributedTitle:(id)a0 summary:(id)a1 xAxisDescriptor:(id)a2 yAxisDescriptor:(id)a3 series:(id)a4;
- (id)initWithTitle:(id)a0 summary:(id)a1 xAxisDescriptor:(id)a2 yAxisDescriptor:(id)a3 additionalAxes:(id)a4 series:(id)a5;
- (id)initWithTitle:(id)a0 summary:(id)a1 xAxisDescriptor:(id)a2 yAxisDescriptor:(id)a3 series:(id)a4;
- (id)_additionalCategoricalAxis;
- (id)_additionalNumericAxis;
- (void)computeValueDescriptionsIfNeeded;

@end
