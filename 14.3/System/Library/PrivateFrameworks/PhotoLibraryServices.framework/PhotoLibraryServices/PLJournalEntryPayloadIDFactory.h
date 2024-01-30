@interface PLJournalEntryPayloadIDFactory : NSObject

+ (id)payloadIDWithUUIDString:(id)a0;
+ (id)payloadIDWithUUIDBytes:(unsigned char[16])a0;
+ (id)payloadIDWithString:(id)a0;

@end
