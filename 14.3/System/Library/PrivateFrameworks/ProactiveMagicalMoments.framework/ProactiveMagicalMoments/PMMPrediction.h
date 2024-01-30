@class NSArray, NSDate;

@interface PMMPrediction : NSObject

@property (readonly, nonatomic) NSArray *predictedItems;
@property (readonly, nonatomic) NSDate *expirationDate;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPredictedItems:(id)a0 expirationDate:(id)a1;
- (BOOL)isEqualToPrediction:(id)a0;

@end
