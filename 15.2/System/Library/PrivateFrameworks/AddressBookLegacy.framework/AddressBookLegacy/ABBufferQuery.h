@class ABSQLPredicate, NSIndexSet, CNManagedConfiguration;

@interface ABBufferQuery : NSObject

@property (nonatomic) void *addressBook;
@property (readonly, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (readonly, nonatomic) ABSQLPredicate *predicate;
@property (nonatomic) struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *statement;
@property (readonly, nonatomic) unsigned int sortOrder;
@property (readonly, nonatomic) NSIndexSet *scopedStoreIdentifiers;
@property (readonly, nonatomic) NSIndexSet *requestedPropertyIdentifiers;
@property (readonly, nonatomic) NSIndexSet *requestedMultivalueIdentifiers;
@property (nonatomic) struct __CFDictionary { } *propertyIndices;
@property (readonly, nonatomic) BOOL fetchLinkedContacts;
@property (readonly, nonatomic) BOOL needsMultivalueTable;
@property (readonly, nonatomic) BOOL needsMultivalueEntryTable;
@property (readonly, nonatomic) BOOL needsPersonTable;
@property (readonly, nonatomic) BOOL needsPersonLinkTable;
@property (readonly, nonatomic) BOOL requestedImageData;
@property (readonly, nonatomic) BOOL requestedImageCropRect;
@property (readonly, nonatomic) BOOL requestedImageThumbnail;
@property (readonly, nonatomic) BOOL requestedImageFullscreenData;
@property (readonly, nonatomic) BOOL requestedSyncImageData;
@property (readonly, nonatomic) BOOL requestedHasImageData;

- (void)prependWithClauseToQueryString:(id)a0 whereClause:(id)a1;
- (void)appendBindParameterMarkersToQueryString:(id)a0 count:(unsigned long long)a1;
- (void)_initSetupPropertySet:(struct __CFSet { } *)a0 includeLinkedContacts:(BOOL)a1;
- (void)appendWhereClauseToQueryString:(id)a0;
- (void)appendCustomPropertySelectsToQueryString:(id)a0;
- (id)scopedStoresForManagedConfiguration:(id)a0;
- (void)bindWhereClause:(id)a0;
- (void)bindWithClause:(id)a0;
- (void)appendOrderByClauseToQueryString:(id)a0;
- (void)dealloc;
- (id)initWithAddressBook:(void *)a0 predicate:(id)a1 requestedProperties:(struct __CFSet { } *)a2 includeLinkedContacts:(BOOL)a3 sortOrder:(unsigned int)a4 managedConfiguration:(id)a5;
- (void)appendFromClauseToQueryString:(id)a0;

@end
