@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict

@property (retain) NSDictionary *ancestorSnapshot;

- (id)initWithSource:(id)a0 newVersion:(unsigned long long)a1 oldVersion:(unsigned long long)a2 cachedSnapshot:(id)a3 persistedSnapshot:(id)a4;
- (void)dealloc;

@end
