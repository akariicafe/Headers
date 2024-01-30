@class NSString;

@interface ICIAMSerialCheckRequest : PBRequest <NSCopying> {
    struct { unsigned char dSID : 1; } _has;
}

@property (nonatomic) BOOL hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;

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

@end
