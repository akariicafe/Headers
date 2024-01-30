@class NSPredicate;

@interface EDMessageQueryParserObject : NSObject

@property (readonly, nonatomic) unsigned long long queryType;
@property (readonly, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithQueryType:(unsigned long long)a0 predicate:(id)a1;

@end
