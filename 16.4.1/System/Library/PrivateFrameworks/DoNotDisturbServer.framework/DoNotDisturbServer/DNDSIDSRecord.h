@class NSString, DNDSIDSRecordID, DNDSIDSRecordMetadata, NSDate, NSMutableDictionary;

@interface DNDSIDSRecord : NSObject <DNDSBackingStoreRecord> {
    NSMutableDictionary *_data;
    DNDSIDSRecordMetadata *_metadata;
}

@property (readonly, copy, nonatomic) DNDSIDSRecordID *recordID;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy, nonatomic) DNDSIDSRecordMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)_initWithMetadata:(id)a0 data:(id)a1;

@end
