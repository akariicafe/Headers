@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject

@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;

- (void).cxx_destruct;
- (id)earnedInstancesWithoutDuplicates:(id)a0;
- (id)earnedInstancesLimitedByEarnLimit:(id)a0;
- (id)initWithTemplateStore:(id)a0;

@end
