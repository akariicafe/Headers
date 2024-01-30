@class PLAccountingRange;

@interface PLAccountingEventEntry : PLEntry

@property (readonly, nonatomic) int instanceDirectionality;
@property (retain, nonatomic) PLAccountingRange *range;
@property (nonatomic) BOOL used;

+ (int)classDirectionality;

- (id)initWithRange:(id)a0;
- (BOOL)canMergeWithEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualContentsWithEvent:(id)a0;
- (BOOL)isEmptyEvent;
- (id)rangeSinceEvent:(id)a0;
- (void)mergeWithEvent:(id)a0;

@end
