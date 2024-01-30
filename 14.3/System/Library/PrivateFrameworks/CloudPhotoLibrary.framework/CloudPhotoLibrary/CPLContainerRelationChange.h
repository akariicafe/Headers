@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange

@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) CPLContainerRelation *relation;

+ (id)relationToContainerWithIdentifier:(id)a0;
+ (id)relationWithItemScopedIdentifier:(id)a0 containerIdentifier:(id)a1;
+ (id)relationWithItemIdentifier:(id)a0 containerIdentifier:(id)a1;
+ (BOOL)shouldReallyQuarantineRecord;

- (BOOL)supportsDeletion;
- (void).cxx_destruct;
- (id)itemScopedIdentifier;
- (id)description;
- (BOOL)supportsDirectDeletion;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)compactedChangeWithRelatedChanges:(id)a0 isOnlyChange:(BOOL)a1 fullRecord:(id)a2 usingStorageView:(id)a3;
- (void)setItemScopedIdentifier:(id)a0;
- (id)containerScopedIdentifier;
- (void)setContainerScopedIdentifier:(id)a0;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)a0;
- (id)secondaryIdentifier;
- (void)setSecondaryIdentifier:(id)a0;
- (BOOL)validateFullRecord;

@end
