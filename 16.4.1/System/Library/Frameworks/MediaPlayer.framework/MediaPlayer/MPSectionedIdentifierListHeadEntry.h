@class NSMutableDictionary, MPSectionedIdentifierListItemEntry, MPSectionedIdentifierListTailEntry, NSString;
@protocol MPSectionedIdentifierListDataSource;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry>

@property (readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap;
@property (retain, nonatomic) MPSectionedIdentifierListTailEntry *tailEntry;
@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *lastItemEntry;
@property (retain, nonatomic) id<MPSectionedIdentifierListDataSource> dataSource;
@property (nonatomic, getter=isShuffledHead) BOOL shuffledHead;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headEntryWithSectionIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)setBranchDepth:(long long)a0;
- (id)initWithPositionKey:(id)a0 sectionIdentifier:(id)a1;
- (id)nextEntries;

@end
