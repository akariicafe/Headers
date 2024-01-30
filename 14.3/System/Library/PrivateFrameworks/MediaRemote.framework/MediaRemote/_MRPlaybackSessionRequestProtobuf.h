@class NSString;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying> {
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct { unsigned char length : 1; unsigned char location : 1; } _has;
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
