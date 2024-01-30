@class NSString, PBDataReader;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_userActionEventKey;
    NSString *_userActionEventValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _userActionEventAction;
    int _userActionEventTarget;
    struct { unsigned char has_userActionEventAction : 1; unsigned char has_userActionEventTarget : 1; unsigned char read_userActionEventKey : 1; unsigned char read_userActionEventValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUserActionEventKey;
@property (retain, nonatomic) NSString *userActionEventKey;
@property (readonly, nonatomic) BOOL hasUserActionEventValue;
@property (retain, nonatomic) NSString *userActionEventValue;
@property (nonatomic) BOOL hasUserActionEventTarget;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic) BOOL hasUserActionEventAction;
@property (nonatomic) int userActionEventAction;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)userActionEventTargetAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)userActionEventActionAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsUserActionEventAction:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsUserActionEventTarget:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
