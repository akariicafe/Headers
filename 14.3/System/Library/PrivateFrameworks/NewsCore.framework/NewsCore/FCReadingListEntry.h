@class NSString, CKRecord, NSDate;

@interface FCReadingListEntry : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) unsigned long long origin;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithEntryID:(id)a0 articleID:(id)a1 dateAdded:(id)a2 origin:(unsigned long long)a3;
- (id)dictionaryRepresentation;

@end
