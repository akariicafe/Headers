@class NSString, NSPredicate, NSArray;

@interface CRSearchQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pageRange;
@property (copy, nonatomic) id /* block */ weightDecayer;
@property (copy, nonatomic) id /* block */ comparator;

+ (id /* block */)frecencyComparatorForSearch:(id)a0 preferredKinds:(id)a1 sendingAddress:(id)a2 queryOptions:(unsigned long long)a3;
+ (id)searchQueryForSearchTerm:(id)a0 preferredKinds:(id)a1 sendingAddress:(id)a2 recentsDomain:(id)a3;
+ (id /* block */)frecencyComparator;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
