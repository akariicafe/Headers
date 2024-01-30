@class NSString;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying> {
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct { unsigned char length : 1; unsigned char location : 1; } _has;
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
