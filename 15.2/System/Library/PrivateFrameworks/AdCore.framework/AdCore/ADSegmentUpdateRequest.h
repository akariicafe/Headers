@class NSData, NSString;

@interface ADSegmentUpdateRequest : PBRequest <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _accountStates;
    struct { int *list; unsigned long long count; unsigned long long size; } _accountTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _deviceModes;
    struct { unsigned char iTunesRefreshTime : 1; unsigned char updateSentTime : 1; unsigned char advertisingIdentifierMonthResetCount : 1; unsigned char timezone : 1; unsigned char isFirstPartyIdentifier : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) BOOL hasSegmentInfo;
@property (retain, nonatomic) NSString *segmentInfo;
@property (nonatomic) BOOL hasIsFirstPartyIdentifier;
@property (nonatomic) BOOL isFirstPartyIdentifier;
@property (readonly, nonatomic) BOOL hasAdvertisingIdentifier;
@property (retain, nonatomic) NSString *advertisingIdentifier;
@property (nonatomic) BOOL hasITunesRefreshTime;
@property (nonatomic) double iTunesRefreshTime;
@property (nonatomic) BOOL hasUpdateSentTime;
@property (nonatomic) double updateSentTime;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) float timezone;
@property (nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount;
@property (nonatomic) int advertisingIdentifierMonthResetCount;
@property (readonly, nonatomic) BOOL hasOsVersionAndBuild;
@property (retain, nonatomic) NSString *osVersionAndBuild;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) BOOL hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (readonly, nonatomic) unsigned long long deviceModesCount;
@property (readonly, nonatomic) int *deviceModes;
@property (readonly, nonatomic) unsigned long long accountTypesCount;
@property (readonly, nonatomic) int *accountTypes;
@property (readonly, nonatomic) unsigned long long accountStatesCount;
@property (readonly, nonatomic) int *accountStates;

+ (id)options;

- (void)clearAccountTypes;
- (void)clearAccountStates;
- (void)setAccountStates:(int *)a0 count:(unsigned long long)a1;
- (id)accountTypesAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsAccountTypes:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)deviceModesAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)accountTypeAtIndex:(unsigned long long)a0;
- (int)StringAsDeviceModes:(id)a0;
- (void)clearDeviceModes;
- (int)deviceModeAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addAccountType:(int)a0;
- (int)accountStateAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setAccountTypes:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsAccountStates:(id)a0;
- (void)setDeviceModes:(int *)a0 count:(unsigned long long)a1;
- (void)addDeviceMode:(int)a0;
- (id)dictionaryRepresentation;
- (void)addAccountState:(int)a0;
- (id)accountStatesAsString:(int)a0;

@end
