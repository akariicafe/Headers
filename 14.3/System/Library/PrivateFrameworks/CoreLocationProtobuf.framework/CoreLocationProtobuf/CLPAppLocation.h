@class NSString, CLPLocation;

@interface CLPAppLocation : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char loiType : 1; unsigned char routineMode : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) int appState;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) BOOL hasRoutineMode;
@property (nonatomic) int routineMode;
@property (nonatomic) BOOL hasLoiType;
@property (nonatomic) int loiType;

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
