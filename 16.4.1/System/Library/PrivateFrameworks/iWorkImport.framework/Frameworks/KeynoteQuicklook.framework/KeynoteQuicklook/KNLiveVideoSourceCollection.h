@class NSSet, KNLiveVideoSource, NSArray;

@interface KNLiveVideoSourceCollection : TSPObject {
    NSArray *_sources;
}

@property (readonly, nonatomic) KNLiveVideoSource *defaultSource;
@property (readonly, nonatomic) NSSet *sources;

+ (BOOL)needsObjectUUID;
+ (id)p_makeDefaultSourceWithContext:(id)a0;
+ (id)localizedDefaultSourceNameForLocale:(id)a0;

- (void)removeSource:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)addSource:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)canRemoveSource:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)p_orderedSources;
- (id)p_uniqueNameForSource:(id)a0 proposedName:(id)a1;
- (id)sourceWithObjectUUID:(id)a0;
- (id)uniqueNameForSource:(id)a0 proposedName:(id)a1;
- (id)uniqueNameForSourceWithProposedName:(id)a0;

@end
