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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
