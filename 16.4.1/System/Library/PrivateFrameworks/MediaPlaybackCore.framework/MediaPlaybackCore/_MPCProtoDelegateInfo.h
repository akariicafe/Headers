@class NSString;

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    unsigned long long _accountID;
    long long _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    NSString *_uuid;
    BOOL _privateListeningEnabled;
    struct { unsigned char accountID : 1; unsigned char delegateInfoID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; } _has;
}

+ (id)currentDeviceDelegateInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)playbackRequestEnvironmentWithBaseEnvironment:(id)a0 error:(id *)a1;

@end
