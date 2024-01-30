@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject

@property (retain, nonatomic) NSPredicate *predicate;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)getString;
- (id)getStringForPredicate:(id)a0;
- (id)getStringForComparisonPredicate:(id)a0;
- (id)getStringForCompoundPredicate:(id)a0;

@end
