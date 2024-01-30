@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView

@property (retain, nonatomic) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void)updateRoundedText:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
