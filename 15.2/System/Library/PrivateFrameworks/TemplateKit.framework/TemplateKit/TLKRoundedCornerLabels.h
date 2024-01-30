@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView

@property (retain, nonatomic) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void).cxx_destruct;
- (id)init;
- (void)updateRoundedText:(id)a0;

@end
