@class CNManagedConfiguration, NSMutableDictionary, ABBufferQuery, NSMutableData;

@interface ABBufferQueryCursor : NSObject

@property (retain, nonatomic) NSMutableData *mutableData;
@property (retain, nonatomic) NSMutableDictionary *matchInfo;
@property (nonatomic) struct sqlite3_blob { } *incompleteBlob;
@property (nonatomic) unsigned long long blobBytesWritten;
@property (nonatomic) unsigned long long blobLength;
@property (nonatomic) long long currentMultivalue;
@property (nonatomic) BOOL hasFoundAnyImageDataForCurrentContact;
@property (nonatomic) long long resumeToken;
@property (nonatomic) int currentMultivalueIdentifier;
@property (nonatomic) int currentPropertyID;
@property (nonatomic) int currentRecordID;
@property (nonatomic) unsigned long long maxBufferSize;
@property (nonatomic) unsigned long long maxContactsPerBatch;
@property (nonatomic) unsigned long long countOfContactsInBuffer;
@property (readonly, nonatomic) ABBufferQuery *query;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) int multivaluePropertyIDColumn;
@property (nonatomic) int multivalueIdentifierColumn;
@property (nonatomic) int multivalueUUIDColumn;
@property (nonatomic) int multivalueValueColumn;
@property (nonatomic) int multivalueLabelColumn;
@property (nonatomic) int multivalueEntryKeyColumn;
@property (nonatomic) int multivalueEntryValueColumn;
@property (nonatomic) int contactLinkUUIDColumn;
@property (nonatomic) int contactPreferredForImageColumn;
@property (nonatomic) int personLinkColumn;

- (id)initWithQuery:(id)a0 batchSize:(unsigned long long)a1 managedConfiguration:(id)a2;
- (id)initWithAddressBook:(void *)a0 predicate:(id)a1 propertyIdentifierSet:(struct __CFSet { } *)a2 includeLinkedContacts:(BOOL)a3 sortOrder:(unsigned int)a4 suggestedContactsPerBatch:(unsigned long long)a5 managedConfiguration:(id)a6;
- (void)fetchNextBatchWithReply:(id /* block */)a0;
- (void)dealloc;

@end
