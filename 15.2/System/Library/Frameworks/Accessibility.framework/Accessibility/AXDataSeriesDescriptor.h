@class NSString, NSAttributedString, NSArray;

@interface AXDataSeriesDescriptor : NSObject <AXDictionaryRepresentable, NSCopying>

@property (readonly, nonatomic) double meanYValue;
@property (copy, nonatomic) NSString *meanValueDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (nonatomic) BOOL isContinuous;
@property (copy, nonatomic) NSArray *dataPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)_commonInitWithContinuous:(BOOL)a0 dataPoints:(id)a1;
- (id)initWithAttributedName:(id)a0 isContinuous:(BOOL)a1 dataPoints:(id)a2;
- (id)_mutableArrayOfNSNullWithCount:(long long)a0;
- (id)initWithName:(id)a0 isContinuous:(BOOL)a1 dataPoints:(id)a2;

@end
