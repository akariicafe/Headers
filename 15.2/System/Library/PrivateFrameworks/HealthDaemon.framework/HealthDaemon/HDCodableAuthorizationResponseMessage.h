@class NSString, NSData;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char shouldPrompt : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (nonatomic) BOOL hasShouldPrompt;
@property (nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL hasHostAppName;
@property (retain, nonatomic) NSString *hostAppName;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
