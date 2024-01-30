@class NSMutableArray;

@interface ASCodableContactList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contacts;

+ (Class)contactsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)contactsCount;
- (void)clearContacts;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addContacts:(id)a0;
- (id)contactsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
