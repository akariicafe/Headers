@class PDSProtoUserPushToken, NSMutableArray;

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {
    struct { unsigned char ttl : 1; } _has;
}

@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken;
@property (retain, nonatomic) NSMutableArray *deviceInfos;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) long long ttl;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)deviceInfoType;
+ (Class)topicType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearDeviceInfos;
- (unsigned long long)topicsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addDeviceInfo:(id)a0;
- (id)deviceInfoAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)topicAtIndex:(unsigned long long)a0;
- (void)clearTopics;
- (unsigned long long)deviceInfosCount;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTopic:(id)a0;

@end
