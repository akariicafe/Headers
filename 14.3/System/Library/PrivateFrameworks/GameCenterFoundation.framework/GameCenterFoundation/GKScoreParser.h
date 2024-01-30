@class NSMutableString, NSMutableArray;

@interface GKScoreParser : NSObject

@property (retain, nonatomic) NSMutableString *prefix;
@property (retain, nonatomic) NSMutableString *suffix;
@property (retain, nonatomic) NSMutableArray *numericSeparators;
@property (nonatomic) long long colonCount;
@property (nonatomic) long long precision;
@property (nonatomic) BOOL error;

+ (id)formattedDifferenceBetweenFirstScore:(id)a0 secondScore:(id)a1;

- (void).cxx_destruct;
- (void)parseScore:(id)a0;

@end
