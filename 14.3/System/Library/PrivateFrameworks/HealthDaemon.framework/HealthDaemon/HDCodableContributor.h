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
