@interface CTUIDataUsageSorting : NSObject

+ (id /* block */)alphabeticalUsageComparator;

- (id /* block */)alphabeticalComparator;
- (id /* block */)usageComparator;

@end
