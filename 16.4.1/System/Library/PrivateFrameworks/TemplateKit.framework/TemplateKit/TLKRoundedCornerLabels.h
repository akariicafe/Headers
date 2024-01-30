@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView

@property (retain, nonatomic) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) unsigned long long sizeConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)updateRoundedText:(id)a0;

@end
