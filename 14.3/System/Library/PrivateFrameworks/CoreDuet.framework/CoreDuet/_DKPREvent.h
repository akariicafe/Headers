@class _DKPRValue, NSString, _DKPRStream, NSMutableArray, _DKPRSource;

@interface _DKPREvent : PBCodable <NSCopying> {
    double _creationDate;
    double _endDate;
    double _startDate;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
    struct { unsigned char creationDate : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
