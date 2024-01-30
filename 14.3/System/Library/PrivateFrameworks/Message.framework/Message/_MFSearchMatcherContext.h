@class CPSearchMatcher, NSMutableDictionary;

@interface _MFSearchMatcherContext : NSObject

@property (retain, nonatomic) CPSearchMatcher *lastMatcher;
@property (nonatomic) char *lastSearchString;
@property (nonatomic) unsigned long long lastSearchStringLength;
@property (retain, nonatomic) NSMutableDictionary *matchers;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;

@end
