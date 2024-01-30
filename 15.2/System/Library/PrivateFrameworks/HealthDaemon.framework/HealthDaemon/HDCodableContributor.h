@class NSData, NSString;

@interface HDCodableContributor : PBCodable <NSCopying> {
    struct { unsigned char modificationDate : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) BOOL hasAppleID;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) BOOL hasCallerID;
@property (retain, nonatomic) NSString *callerID;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
