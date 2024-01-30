@interface PLJournalEntryPayloadIDFactory : NSObject

+ (id)payloadIDWithUUIDBytes:(unsigned char[16])a0;
+ (id)payloadIDWithString:(id)a0;
+ (id)payloadIDWithUUIDString:(id)a0;

@end
