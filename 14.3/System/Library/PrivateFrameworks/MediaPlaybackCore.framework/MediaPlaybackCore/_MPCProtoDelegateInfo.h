@class NSString;

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    struct { unsigned char accountID : 1; unsigned char delegateInfoID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic) BOOL hasAccountID;
@property (nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasDeviceGUID;
@property (retain, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasSystemReleaseType;
@property (nonatomic) int systemReleaseType;
@property (readonly, nonatomic) BOOL hasRequestUserAgent;
@property (retain, nonatomic) NSString *requestUserAgent;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) BOOL hasPrivateListeningEnabled;
@property (nonatomic) BOOL privateListeningEnabled;

+ (id)currentDeviceDelegateInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)a0 completion:(id /* block */)a1;

@end
