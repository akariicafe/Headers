@class NSMutableSet;

@interface SYObjectChangeSet : NSObject

@property (copy, nonatomic) NSMutableSet *added;
@property (copy, nonatomic) NSMutableSet *updated;
@property (copy, nonatomic) NSMutableSet *deleted;

- (id)init;
- (void).cxx_destruct;
- (void)applyToStore:(id)a0;
- (id)changesBetween:(id)a0 and:(id)a1;
- (id)initWithChangesBetween:(id)a0 and:(id)a1;

@end
