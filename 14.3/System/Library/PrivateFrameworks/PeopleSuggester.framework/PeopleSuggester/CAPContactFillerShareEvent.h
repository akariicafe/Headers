@class NSMutableArray, CAPContactFillerUserEvent;

@interface CAPContactFillerShareEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactEvents;
@property (retain, nonatomic) CAPContactFillerUserEvent *userEvent;

+ (Class)contactEventType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addContactEvent:(id)a0;
- (unsigned long long)contactEventsCount;
- (void)clearContactEvents;
- (id)contactEventAtIndex:(unsigned long long)a0;

@end
