@interface FBKMergePolicy : NSMergePolicy

@property (nonatomic) unsigned long long type;

- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (id)initWithType:(unsigned long long)a0;

@end
