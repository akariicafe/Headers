@interface CTUIDataUsageSorting : NSObject

+ (id /* block */)alphabeticalUsageComparator;

- (id /* block */)usageComparator;
- (id /* block */)alphabeticalComparator;

@end
