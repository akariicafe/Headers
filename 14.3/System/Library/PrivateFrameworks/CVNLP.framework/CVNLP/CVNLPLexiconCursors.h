@class NSArray;

@interface CVNLPLexiconCursors : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *_sortedCursors;
@property (readonly, nonatomic) NSArray *cursors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (id)initWithCursors:(id)a0;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;

@end
