@class HMFStagedValue;

@interface HMDManagedStagedValue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ commitBlock;
@property (retain) HMFStagedValue *stagedValue;
@property (readonly, copy, nonatomic) id initialValue;
@property (nonatomic) long long state;
@property (readonly) id value;

- (void).cxx_destruct;
- (void)stageValue:(id)a0;
- (void)_handleCommitCompletionWithStagedValue:(id)a0 success:(BOOL)a1 committingValue:(id)a2;
- (void)_commitIfStaged:(id)a0;
- (void)_resetStagedValue;
- (id)initWithValue:(id)a0 commitBlock:(id /* block */)a1;
- (void)resetAndStagePriorValue;

@end
