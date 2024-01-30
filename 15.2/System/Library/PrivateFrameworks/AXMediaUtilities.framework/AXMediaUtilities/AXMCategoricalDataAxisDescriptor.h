@class NSArray, NSString, NSAttributedString;

@interface AXMCategoricalDataAxisDescriptor : NSObject <AXMChartDictionaryRepresentable, AXMDataAxisDescriptor>

@property (copy, nonatomic) NSArray *categoryOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL isCategoricalAxis;

- (double)lowerBound;
- (double)upperBound;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (double)normalizedAxisValueForValue:(id)a0;
- (id)initWithAttributedTitle:(id)a0 categoryOrder:(id)a1;
- (id)initWithTitle:(id)a0 categoryOrder:(id)a1;

@end
