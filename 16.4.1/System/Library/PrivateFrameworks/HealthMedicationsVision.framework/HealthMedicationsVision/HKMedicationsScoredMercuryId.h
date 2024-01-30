@class NSNumber;

@interface HKMedicationsScoredMercuryId : NSObject

@property (retain, nonatomic) NSNumber *mercuryId;
@property (retain, nonatomic) NSNumber *score;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMercuryId:(id)a0 score:(id)a1;

@end
