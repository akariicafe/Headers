@class HKMedicationsNumberToNumberPairListMap, HKMedicationsNumberToNumberMap, NSSet;

@interface HKMedicationsMapResult : NSObject

@property (nonatomic) long long ngramCount;
@property (retain, nonatomic) HKMedicationsNumberToNumberMap *commonDict;
@property (retain, nonatomic) HKMedicationsNumberToNumberPairListMap *uniqueDict;
@property (retain, nonatomic) HKMedicationsNumberToNumberMap *commonSetSizeDict;
@property (retain, nonatomic) HKMedicationsNumberToNumberMap *uniqueSetSizeDict;
@property (retain, nonatomic) NSSet *distinctHgIds;

- (void).cxx_destruct;

@end
