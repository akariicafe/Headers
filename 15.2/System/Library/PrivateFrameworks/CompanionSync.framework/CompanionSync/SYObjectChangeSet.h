@class NSMutableSet;

@interface SYObjectChangeSet : NSObject

@property (copy, nonatomic) NSMutableSet *added;
@property (copy, nonatomic) NSMutableSet *updated;
@property (copy, nonatomic) NSMutableSet *deleted;

- (void).cxx_destruct;
- (id)init;
- (id)changesBetween:(id)a0 and:(id)a1;
- (id)initWithChangesBetween:(id)a0 and:(id)a1;
- (void)applyToStore:(id)a0;

@end
