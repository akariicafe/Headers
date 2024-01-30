@class NSNumber, NSSet, NSString;

@interface MIONumericConstraint : NSObject <MIOFeatureValueConstraint>

@property (readonly, nonatomic) NSNumber *minNumber;
@property (readonly, nonatomic) NSNumber *maxNumber;
@property (readonly, copy, nonatomic) NSSet *enumeratedNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMinimum:(id)a0 maximum:(id)a1;
- (id)initWithEnumeratedNumbers:(id)a0;

@end
