@class NSMutableDictionary;

@interface HMDManagedObjectCodingChangeSet : NSObject {
    NSMutableDictionary *_changedObjects;
}

@property (readonly, getter=isEmpty) BOOL empty;

- (void).cxx_destruct;
- (long long)changeScopeForObjectWithID:(id)a0 attributeKeys:(id *)a1 relationshipKeys:(id *)a2;
- (id)initWithCodingModel:(id)a0 context:(id)a1 changes:(id /* block */)a2;
- (id)initWithCodingModel:(id)a0 context:(id)a1 transactions:(id)a2;
- (id)shortDescriptionForChangeSet;

@end
