@class NSEntityDescription;

@interface WFDatabaseResultFetchOperation : NSObject

@property (readonly, nonatomic) NSEntityDescription *entity;

- (id)resultsWithContext:(id)a0 error:(id *)a1;
- (long long)countWithContext:(id)a0 error:(id *)a1;

@end
