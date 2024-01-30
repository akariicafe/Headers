@class NSArray;

@interface IETestResults : NSObject

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *parseErrors;

- (void).cxx_destruct;
- (int)getCount:(unsigned long long)a0;

@end
