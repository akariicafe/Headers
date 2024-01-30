@class NSMutableArray;

@interface HUApplier : NSObject {
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;

+ (void)registerStandaloneApplier:(id)a0;
+ (void)unregisterStandaloneApplier:(id)a0;

- (BOOL)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)a0;
- (BOOL)complete:(BOOL)a0;
- (void)updateProgress:(double)a0;
- (BOOL)start;
- (void)addApplierBlock:(id /* block */)a0;
- (BOOL)_hasCompleted;

@end
