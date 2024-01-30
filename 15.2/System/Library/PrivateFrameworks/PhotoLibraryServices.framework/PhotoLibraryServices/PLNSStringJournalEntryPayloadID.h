@class NSString;

@interface PLNSStringJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {
    NSString *_payloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithString:(id)a0;
- (id)payloadUUIDData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)payloadIDString;

@end
