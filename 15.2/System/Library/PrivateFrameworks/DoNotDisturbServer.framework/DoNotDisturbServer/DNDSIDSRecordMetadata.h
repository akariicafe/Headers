@class DNDSIDSRecordID, NSString, NSDate;

@interface DNDSIDSRecordMetadata : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSIDSRecordID *recordID;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordID:(id)a0 lastModified:(id)a1 deleted:(BOOL)a2;
- (id)_initWithRecordMetadata:(id)a0;

@end
