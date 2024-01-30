@class DNDSIDSRecordID, NSDate;

@interface DNDSMutableIDSRecordMetadata : DNDSIDSRecordMetadata

@property (copy, nonatomic) DNDSIDSRecordID *recordID;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic, getter=isDeleted) BOOL deleted;

- (void)setDeleted:(BOOL)a0;
- (void)setLastModified:(id)a0;
- (void)setRecordID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
