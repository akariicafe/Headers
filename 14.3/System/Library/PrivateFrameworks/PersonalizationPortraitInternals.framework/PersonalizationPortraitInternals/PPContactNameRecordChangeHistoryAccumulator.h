@class CNContactStore, NSString, NSArray, NSMutableArray;

@interface PPContactNameRecordChangeHistoryAccumulator : NSObject <CNChangeHistoryEventVisitor> {
    CNContactStore *_store;
    NSArray *_keysToFetch;
    NSMutableArray *_records;
    BOOL _truncated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)records;
- (id)initWithStore:(id)a0 keysToFetch:(id)a1;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (BOOL)truncated;
- (id)_nameRecordWithContactIdentifier:(id)a0 changeType:(unsigned char)a1;

@end
