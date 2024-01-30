@class NSArray, NSMutableArray, NSString;

@interface TextRow : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *mutableTokens;
@property double cachedScore;
@property (readonly, retain, nonatomic) NSArray *tokens;
@property (readonly) unsigned long long tokenCount;
@property (readonly) NSString *string;
@property (readonly) double score;
@property (readonly) NSArray *features;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addToken:(id)a0;

@end
