@class NSNumber, PKCatalogGroup, NSMutableDictionary;
@protocol PKGroupDelegate;

@interface PKGroup : NSObject {
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
}

@property (nonatomic, getter=isLocal) BOOL local;
@property (weak, nonatomic) id<PKGroupDelegate> delegate;
@property (nonatomic) unsigned long long frontmostPassIndex;
@property (readonly, nonatomic) NSNumber *groupID;

- (id)passWithUniqueID:(id)a0;
- (id)init;
- (id)description;
- (id)passes;
- (void).cxx_destruct;
- (unsigned long long)_indexOfUniqueID:(id)a0;
- (void)_insertPass:(id)a0 atIndex:(unsigned long long)a1 notify:(BOOL)a2;
- (void)_moveUniqueID:(id)a0 toIndex:(unsigned long long)a1 notify:(BOOL)a2;
- (void)_removeUniqueID:(id)a0 notify:(BOOL)a1;
- (void)_updatePass:(id)a0 notify:(BOOL)a1;
- (BOOL)containsOnlyUniqueID:(id)a0;
- (BOOL)containsPasses;
- (id)copyCatalogGroup;
- (void)enumerateUniqueIDsWithHandler:(id /* block */)a0;
- (void)handleUserPassDelete:(id)a0;
- (unsigned long long)indexForPassUniqueID:(id)a0;
- (id)initWithCatalogGroup:(id)a0 passes:(id)a1;
- (void)movePass:(id)a0 toIndex:(unsigned long long)a1;
- (id)passAtIndex:(unsigned long long)a0;
- (unsigned long long)passCount;
- (void)updateWithCatalogGroup:(id)a0 passes:(id)a1 expiredSectionPasses:(id)a2 notify:(BOOL)a3;

@end
