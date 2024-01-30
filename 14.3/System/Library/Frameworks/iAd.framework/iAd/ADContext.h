@class NSString, NSMutableSet;

@interface ADContext : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *tags;
@property (copy, nonatomic) NSString *requestJSON;

- (void)setContextInfoForConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)matchesForNewContext:(id)a0 matchClauses:(id)a1 excludeTags:(id)a2;
- (BOOL)isFeed;
- (id)initWithTags:(id)a0;
- (id)fullContext;
- (BOOL)_matchesClause:(id)a0 inContext:(id)a1;

@end
