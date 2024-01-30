@class NSString;

@interface AWDITesterTestFinish : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char testStatus : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasTestName;
@property (retain, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL hasUniqueKey;
@property (retain, nonatomic) NSString *uniqueKey;
@property (nonatomic) BOOL hasTestStatus;
@property (nonatomic) unsigned int testStatus;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
