@class NSPersistentHistoryToken, PLJournalEntryHeader;
@protocol PLJournalEntryPayloadID, PLJournalEntryPayload;

@interface PLJournalEntry : NSObject

@property (retain, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (nonatomic) unsigned int payloadVersion;
@property (retain, nonatomic) PLJournalEntryHeader *header;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) id<PLJournalEntryPayload> payload;
@property (readonly, nonatomic) Class payloadClass;

- (id)debugDescription;
- (id)init;
- (id)description;
- (unsigned long long)entryType;
- (void).cxx_destruct;
- (void)writeBytes:(const void *)a0 length:(unsigned long long)a1 toFileHandle:(id)a2;
- (void)_appendHeaderData:(id)a0 headerCRC:(unsigned short)a1 payloadData:(id)a2 toFileHandle:(id)a3;
- (BOOL)_readFromFileHandle:(id)a0 decodePayload:(BOOL)a1 payloadClass:(Class)a2 error:(id *)a3;
- (void)appendHeaderData:(id)a0 headerCRC:(unsigned short)a1 payloadData:(id)a2 toFileHandle:(id)a3;
- (id)descriptionWithBuilder:(id)a0;
- (id)entryTypeDescription;
- (id)initForDeleteWithPayloadID:(id)a0 payloadClass:(Class)a1;
- (id)initForInsertWithPayload:(id)a0;
- (id)initForUpdateWithPayload:(id)a0;
- (id)initWithPayloadID:(id)a0 payload:(id)a1 payloadClass:(Class)a2 entryType:(int)a3;
- (BOOL)readFromFileHandle:(id)a0 decodePayload:(BOOL)a1 payloadClass:(Class)a2 entryOffset:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)writeToFileHandle:(id)a0 error:(id *)a1;

@end
