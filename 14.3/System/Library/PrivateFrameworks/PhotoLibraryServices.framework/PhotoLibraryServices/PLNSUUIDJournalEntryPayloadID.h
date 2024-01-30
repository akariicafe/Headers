@class NSString, NSUUID;

@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {
    NSUUID *_payloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)payloadIDString;
- (BOOL)isEqual:(id)a0;
- (id)payloadUUIDData;
- (id)initWithUUIDString:(id)a0;

@end
