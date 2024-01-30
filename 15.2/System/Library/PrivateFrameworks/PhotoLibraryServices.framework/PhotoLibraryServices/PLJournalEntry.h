@class NSPersistentHistoryToken, PLJournalEntryHeader;
@protocol PLJournalEntryPayloadID, PLJournalEntryPayload;

@interface PLJournalEntry : NSObject

@property (retain, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (nonatomic) unsigned int payloadVersion;
@property (retain, nonatomic) PLJournalEntryHeader *header;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) id<PLJournalEntryPayload> payload;

- (id)initForInsertWithPayload:(id)a0;
- (id)initForUpdateWithPayload:(id)a0;
- (id)description;
- (id)initWithPayloadID:(id)a0 payload:(id)a1 entryType:(int)a2;
- (id)initForDeleteWithPayloadID:(id)a0;
- (BOOL)_readFromFileHandle:(id)a0 decodePayload:(BOOL)a1 payloadClass:(Class)a2 error:(id *)a3;
- (void)writeBytes:(const void *)a0 length:(unsigned long long)a1 toFileHandle:(id)a2;
- (BOOL)writeToFileHandle:(id)a0 error:(id *)a1;
- (BOOL)readFromFileHandle:(id)a0 decodePayload:(BOOL)a1 payloadClass:(Class)a2 entryOffset:(unsigned long long *)a3 error:(id *)a4;
- (void)_appendHeaderData:(id)a0 headerCRC:(unsigned short)a1 payloadData:(id)a2 toFileHandle:(id)a3;
- (void)appendHeaderData:(id)a0 headerCRC:(unsigned short)a1 payloadData:(id)a2 toFileHandle:(id)a3;
- (id)descriptionWithBuilder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)entryType;
- (id)debugDescription;

@end
