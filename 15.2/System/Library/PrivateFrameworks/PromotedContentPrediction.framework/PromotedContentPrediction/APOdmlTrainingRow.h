@class NSArray;

@interface APOdmlTrainingRow : NSObject

@property (readonly, nonatomic) NSArray *appUsageVector;
@property (readonly, nonatomic) NSArray *appVector;
@property (readonly, nonatomic) NSArray *pTTRLogit;
@property (readonly, nonatomic) NSArray *label;

- (void).cxx_destruct;
- (id)initWithAppUsageVector:(id)a0 appVector:(id)a1 pTTRLogit:(id)a2 label:(id)a3;

@end
