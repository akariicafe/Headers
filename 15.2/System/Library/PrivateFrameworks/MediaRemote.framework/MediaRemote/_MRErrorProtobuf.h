@class NSString, NSMutableArray;

@interface _MRErrorProtobuf : PBCodable <NSCopying> {
    int _code;
    NSString *_domain;
    NSString *_localizedDescription;
    NSString *_localizedFailureReason;
    NSMutableArray *_underlyingErrors;
    struct { unsigned char code : 1; } _has;
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
