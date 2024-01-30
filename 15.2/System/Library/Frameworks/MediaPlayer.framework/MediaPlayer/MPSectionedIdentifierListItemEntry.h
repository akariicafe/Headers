@class NSString, NSMutableArray;

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem>

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (weak, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property (readonly, nonatomic) BOOL hasClones;
@property (retain, nonatomic) NSMutableArray *clonedEntries;
@property (readonly, nonatomic, getter=isRemoved) BOOL removed;
@property (readonly, nonatomic) struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; } state;
@property (readonly, nonatomic, getter=isDataSourceCloned) BOOL dataSourceCloned;
@property (readonly, nonatomic, getter=isDataSourceMoved) BOOL dataSourceMoved;
@property (readonly, nonatomic, getter=isUserRemoved) BOOL userRemoved;
@property (readonly, nonatomic, getter=isUserMoved) BOOL userMoved;
@property (readonly, nonatomic, getter=isUserCloned) BOOL userCloned;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)itemEntryWithSectionIdentifier:(id)a0 itemIdentifier:(id)a1 generationPrefix:(id)a2;
+ (id)itemEntryWithSectionIdentifier:(id)a0 itemIdentifier:(id)a1;

- (id)stringRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)prepareForDealloc;
- (void)setDataSourceRemoved;
- (BOOL)isDataSourceRemoved;
- (void)setDataSourceCloned;
- (void)setDataSourceMoved;
- (void)setUserRemoved;
- (void)setUserMoved;
- (void)setUserCloned;
- (id)newClonedEntry;
- (long long)_generationNumber;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
