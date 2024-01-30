@class NSArray, NSString, AXScale, NSAttributedString;

@interface AXNumericDataAxisDescriptor : NSObject <AXDictionaryRepresentable, AXDataAxisDescriptor>

@property (retain, nonatomic) AXScale *scale;
@property (nonatomic) long long scaleType;
@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;
@property (copy, nonatomic) id /* block */ valueDescriptionProvider;
@property (copy, nonatomic) NSArray *gridlinePositions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)_commonInitWithLowerBound:(double)a0 upperBound:(double)a1 gridlinePositions:(id)a2 valueDescriptionProvider:(id /* block */)a3;
- (id)initWithAttributedTitle:(id)a0 lowerBound:(double)a1 upperBound:(double)a2 gridlinePositions:(id)a3 valueDescriptionProvider:(id /* block */)a4;
- (id)initWithTitle:(id)a0 lowerBound:(double)a1 upperBound:(double)a2 gridlinePositions:(id)a3 valueDescriptionProvider:(id /* block */)a4;

@end
