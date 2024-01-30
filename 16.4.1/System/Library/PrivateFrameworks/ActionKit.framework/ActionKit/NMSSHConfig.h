@class NSArray;

@interface NMSSHConfig : NSObject

@property (retain, nonatomic) NSArray *hostConfigs;

+ (id)configFromFile:(id)a0;

- (id)initWithString:(id)a0;
- (id)initWithFile:(id)a0;
- (void).cxx_destruct;
- (id)arrayFromString:(id)a0;
- (id)blanksCharacterSet;
- (int)host:(id)a0 matchesPatternList:(id)a1;
- (BOOL)host:(id)a0 matchesSubpattern:(id)a1;
- (id)hostConfigForHost:(id)a0;
- (void)parseHostNameWithArguments:(id)a0 intoArray:(id)a1;
- (void)parseHostWithArguments:(id)a0 intoArray:(id)a1;
- (void)parseIdentityFileWithArguments:(id)a0 intoArray:(id)a1;
- (void)parseLine:(id)a0 intoArray:(id)a1;
- (void)parsePortWithArguments:(id)a0 intoArray:(id)a1;
- (void)parseUserWithArguments:(id)a0 intoArray:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInString:(id)a0 fromLocationUntilBlankOrEnd:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstTokenInString:(id)a0 suffix:(id *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuotedSubstringInString:(id)a0 startingAtIndex:(unsigned long long)a1;

@end
