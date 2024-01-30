@class NSIndexSet;
@protocol EDSearchableCriterion;

@interface _EMSearchableIndexResultKey : NSObject

@property (retain, nonatomic) id<EDSearchableCriterion> criterion;
@property (copy, nonatomic) NSIndexSet *mailboxIDs;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
