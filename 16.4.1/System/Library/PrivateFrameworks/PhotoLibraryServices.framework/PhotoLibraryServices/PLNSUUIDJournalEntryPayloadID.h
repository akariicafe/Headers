@class NSString, NSUUID;

@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {
    NSUUID *_payloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUIDString:(id)a0;
- (void).cxx_destruct;
- (id)payloadIDString;
- (id)payloadUUIDData;

@end
