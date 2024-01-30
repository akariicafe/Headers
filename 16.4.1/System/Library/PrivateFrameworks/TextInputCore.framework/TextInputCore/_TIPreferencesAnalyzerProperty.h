@class NSString;

@interface _TIPreferencesAnalyzerProperty : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) int reportingMode;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 reportingMode:(int)a3;

@end
