@class NSString, MPSectionedIdentifierListHeadEntry;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry>

@property (weak, nonatomic) MPSectionedIdentifierListHeadEntry *sectionHeadEntry;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tailEntryWithSectionHeadEntry:(id)a0;

- (void).cxx_destruct;
- (id)previousEntry;

@end
