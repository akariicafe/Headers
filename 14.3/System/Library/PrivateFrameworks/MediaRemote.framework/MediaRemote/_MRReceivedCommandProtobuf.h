@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRCommandOptionsProtobuf, _MRReceivedCommandAppOptionsProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying> {
    struct { unsigned char destinationAppProcessID : 1; unsigned char command : 1; unsigned char originUID : 1; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (nonatomic) BOOL hasOriginUID;
@property (nonatomic) int originUID;
@property (readonly, nonatomic) BOOL hasSenderAppDisplayID;
@property (retain, nonatomic) NSString *senderAppDisplayID;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) BOOL hasDestinationAppProcessID;
@property (nonatomic) long long destinationAppProcessID;
@property (readonly, nonatomic) BOOL hasRemoteControlInterfaceID;
@property (retain, nonatomic) NSString *remoteControlInterfaceID;
@property (readonly, nonatomic) BOOL hasAppOptions;
@property (retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)commandAsString:(int)a0;
- (int)StringAsCommand:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
