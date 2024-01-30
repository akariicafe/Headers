@class NSString;

@interface AWDITesterCertApplePayTestFinish : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char testIterations : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasTestUUID;
@property (retain, nonatomic) NSString *testUUID;
@property (readonly, nonatomic) BOOL hasTestName;
@property (retain, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL hasTestStatus;
@property (retain, nonatomic) NSString *testStatus;
@property (nonatomic) BOOL hasTestIterations;
@property (nonatomic) unsigned int testIterations;
@property (readonly, nonatomic) BOOL hasTestResult;
@property (retain, nonatomic) NSString *testResult;
@property (readonly, nonatomic) BOOL hasTestErrorDescription;
@property (retain, nonatomic) NSString *testErrorDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
