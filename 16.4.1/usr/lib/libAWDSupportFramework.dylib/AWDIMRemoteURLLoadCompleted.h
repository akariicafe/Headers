@interface AWDIMRemoteURLLoadCompleted : PBCodable <NSCopying> {
    struct { unsigned char connectEndToRequestStartMillis : 1; unsigned char connectStartToConnectEndMillis : 1; unsigned char connectStartToSecureConnectionStartMillis : 1; unsigned char domainLookupEndToConnectStartMillis : 1; unsigned char domainLookupStartToDomainLookupEndMillis : 1; unsigned char fetchStartToDomainLookupStartMillis : 1; unsigned char navigationStartToRedirectStartMillis : 1; unsigned char redirectEndToFetchStartMillis : 1; unsigned char redirectStartToRedirectEndMillis : 1; unsigned char requestStartToResponseStartMillis : 1; unsigned char responseStartToResponseEndMillis : 1; unsigned char secureConnectionStartToConnectEndMillis : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNavigationStartToRedirectStartMillis;
@property (nonatomic) unsigned long long navigationStartToRedirectStartMillis;
@property (nonatomic) BOOL hasRedirectStartToRedirectEndMillis;
@property (nonatomic) unsigned long long redirectStartToRedirectEndMillis;
@property (nonatomic) BOOL hasRedirectEndToFetchStartMillis;
@property (nonatomic) unsigned long long redirectEndToFetchStartMillis;
@property (nonatomic) BOOL hasFetchStartToDomainLookupStartMillis;
@property (nonatomic) unsigned long long fetchStartToDomainLookupStartMillis;
@property (nonatomic) BOOL hasDomainLookupStartToDomainLookupEndMillis;
@property (nonatomic) unsigned long long domainLookupStartToDomainLookupEndMillis;
@property (nonatomic) BOOL hasDomainLookupEndToConnectStartMillis;
@property (nonatomic) unsigned long long domainLookupEndToConnectStartMillis;
@property (nonatomic) BOOL hasConnectStartToSecureConnectionStartMillis;
@property (nonatomic) unsigned long long connectStartToSecureConnectionStartMillis;
@property (nonatomic) BOOL hasConnectStartToConnectEndMillis;
@property (nonatomic) unsigned long long connectStartToConnectEndMillis;
@property (nonatomic) BOOL hasSecureConnectionStartToConnectEndMillis;
@property (nonatomic) unsigned long long secureConnectionStartToConnectEndMillis;
@property (nonatomic) BOOL hasConnectEndToRequestStartMillis;
@property (nonatomic) unsigned long long connectEndToRequestStartMillis;
@property (nonatomic) BOOL hasRequestStartToResponseStartMillis;
@property (nonatomic) unsigned long long requestStartToResponseStartMillis;
@property (nonatomic) BOOL hasResponseStartToResponseEndMillis;
@property (nonatomic) unsigned long long responseStartToResponseEndMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
