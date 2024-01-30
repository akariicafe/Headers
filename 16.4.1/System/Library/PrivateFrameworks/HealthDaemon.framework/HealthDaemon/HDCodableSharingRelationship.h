@class NSString, NSMutableArray;

@interface HDCodableSharingRelationship : PBCodable <NSCopying> {
    struct { unsigned char dateModified : 1; unsigned char recipientType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecipientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (nonatomic) BOOL hasRecipientType;
@property (nonatomic) int recipientType;
@property (nonatomic) BOOL hasDateModified;
@property (nonatomic) double dateModified;
@property (retain, nonatomic) NSMutableArray *authorizationIdentifiers;
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations;

+ (Class)authorizationIdentifiersType;
+ (Class)sharingAuthorizationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsRecipientType:(id)a0;
- (void)addAuthorizationIdentifiers:(id)a0;
- (void)addSharingAuthorizations:(id)a0;
- (id)authorizationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)authorizationIdentifiersCount;
- (void)clearAuthorizationIdentifiers;
- (void)clearSharingAuthorizations;
- (id)recipientTypeAsString:(int)a0;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)sharingAuthorizationsCount;

@end
