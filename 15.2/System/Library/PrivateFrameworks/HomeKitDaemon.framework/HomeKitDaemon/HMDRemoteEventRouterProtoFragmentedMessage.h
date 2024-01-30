@class NSData;

@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    unsigned long long _totalFragments;
    unsigned long long _totalSize;
    NSData *_fragmentData;
    unsigned int _fragmentNumber;
    unsigned int _routerVersion;
    struct { unsigned char totalFragments : 1; unsigned char totalSize : 1; unsigned char fragmentNumber : 1; unsigned char routerVersion : 1; } _has;
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
