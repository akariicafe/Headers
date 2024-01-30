@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject

@property (retain, nonatomic) NSPredicate *predicate;

- (id)initWithPredicate:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)getString;
- (id)getStringForComparisonPredicate:(id)a0;
- (id)getStringForCompoundPredicate:(id)a0;
- (id)getStringForPredicate:(id)a0;

@end
