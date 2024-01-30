@class NSString, NSArray, REElementQueue, _RESectionDescriptor, NSMutableDictionary, NSMutableSet, NSMutableArray, REMLElementComparator;
@protocol RESectionDelegate;

@interface RESection : NSObject <RESectionDelegate, RESectionProperties> {
    _RESectionDescriptor *_descriptor;
    REElementQueue *_queue;
    NSMutableSet *_hiddenElements;
    NSMutableDictionary *_elements;
    BOOL _allowsSubsections;
    NSMutableDictionary *_subsections;
    BOOL _performingBatch;
    NSMutableArray *_batchBlocks;
}

@property (copy, nonatomic) REMLElementComparator *comparator;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<RESectionDelegate> delegate;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long visibleCount;
@property (nonatomic) long long maximumElements;
@property (readonly, nonatomic) NSArray *allElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *elements;

- (void)_removeSection:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (long long)indexOfElementWithId:(id)a0;
- (void)_updateElementWithId:(id)a0 withNewFeatureSet:(id)a1 forceHidden:(BOOL)a2;
- (void)_addElement:(id)a0 forceHidden:(BOOL)a1;
- (id)elementIdAtIndex:(unsigned long long)a0;
- (void)sectionDidUpdateContentOrder:(id)a0;
- (id)_createSectionForGroup:(id)a0;
- (void)updateElementWithId:(id)a0 withNewFeatureSet:(id)a1 forceHidden:(BOOL)a2;
- (void)_performOrEnqueueBlock:(id /* block */)a0;
- (id)section:(id)a0 groupForIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_removeElementWithId:(id)a0;
- (long long)_mappedIndexFromIndex:(long long)a0;
- (BOOL)containsElementWithId:(id)a0;
- (id)_groupForIdentifier:(id)a0;
- (void)addElement:(id)a0 forceHidden:(BOOL)a1;
- (id)_groupIdentifierForElement:(id)a0;
- (id)initWithSectionDescriptor:(id)a0 comparator:(id)a1;
- (void)removeElementWithId:(id)a0;
- (long long)_compareElement:(id)a0 toElement:(id)a1 level:(unsigned long long)a2;

@end
