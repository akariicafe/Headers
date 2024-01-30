@class NSIndexSet;
@protocol EDSearchableCriterion;

@interface _EMSearchableIndexResultKey : NSObject

@property (retain, nonatomic) id<EDSearchableCriterion> criterion;
@property (copy, nonatomic) NSIndexSet *mailboxIDs;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
