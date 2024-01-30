@class PAPBAccess;

@interface PAPBOutOfProcessPickerAccess : PBCodable <NSCopying> {
    struct { unsigned char pickerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccess;
@property (retain, nonatomic) PAPBAccess *access;
@property (nonatomic) BOOL hasPickerType;
@property (nonatomic) int pickerType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
