@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject

@property (retain, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithPredicate:(id)a0;
- (id)getString;
- (id)getStringForPredicate:(id)a0;
- (id)getStringForComparisonPredicate:(id)a0;
- (id)getStringForCompoundPredicate:(id)a0;

@end
