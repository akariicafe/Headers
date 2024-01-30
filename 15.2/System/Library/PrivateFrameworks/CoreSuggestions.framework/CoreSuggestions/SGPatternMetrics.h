@class SGMSelfIdPatternMatched;

@interface SGPatternMetrics : NSObject

@property (retain, nonatomic) SGMSelfIdPatternMatched *selfIdPatternMatched;

+ (id)instance;
+ (void)recordSelfIdMatchWithPatternType:(struct SGMSIPatternType_ { unsigned long long x0; })a0 patternHash:(id)a1 nameTokenCount:(unsigned long long)a2 nameClassification:(struct SGMSINameClassification_ { unsigned long long x0; })a3 messageIndex:(unsigned long long)a4;

- (void).cxx_destruct;
- (id)init;

@end
