@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_notifications;
    NSMutableArray *_playerPaths;
    NSMutableArray *_userInfos;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
