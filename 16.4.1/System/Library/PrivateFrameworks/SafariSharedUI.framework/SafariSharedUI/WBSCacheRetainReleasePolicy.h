@class NSSet, NSCountedSet;

@interface WBSCacheRetainReleasePolicy : NSObject {
    id /* block */ _purgeBlock;
    NSCountedSet *_entryRetainCounts;
    NSCountedSet *_negativeEntryRetainCounts;
}

@property (readonly, copy, nonatomic) NSSet *retainedKeyStrings;

- (void).cxx_destruct;
- (void)_releaseEntryForKeyString:(id)a0;
- (void)_retainEntryForKeyString:(id)a0;
- (id)initWithPurgeBlock:(id /* block */)a0;
- (BOOL)isEntryRetainedForKeyString:(id)a0;
- (void)releaseEntriesForKeyStrings:(id)a0;
- (void)releaseEntryForKeyString:(id)a0;
- (void)releaseEntryWithKeyStringProvider:(id /* block */)a0;
- (void)retainEntriesForKeyStrings:(id)a0;
- (void)retainEntryForKeyString:(id)a0;
- (void)retainEntryWithKeyStringProvider:(id /* block */)a0;

@end
