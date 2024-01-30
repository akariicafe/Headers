@class NSString, NSMutableDictionary;

@interface DSIDRecord : NSObject <NSCopying> {
    BOOL _dirty;
    int _nextReconcileTimestamp;
}

@property (retain, nonatomic) NSString *DSID;
@property (retain, nonatomic) NSString *iCloudDSID;
@property (nonatomic) BOOL accountIsT13;
@property (nonatomic) BOOL accountIsU13;
@property (nonatomic) BOOL accountIsU18;
@property (nonatomic) BOOL accountAgeUnknown;
@property (nonatomic) BOOL isDPIDManatee;
@property (nonatomic) int personalizedAdsTimestamp;
@property (retain, nonatomic) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (retain, nonatomic) NSString *iAdIDBeforeReset;
@property (nonatomic) BOOL isPlaceholderAccount;
@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic) long long lastJingleAccountStatus;
@property (nonatomic) BOOL lastSentPersonalizedAdsStatus;
@property (nonatomic) int lastSentPersonalizedAdsTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL notificationRequired;
@property (readonly, nonatomic) BOOL isActiveRecord;
@property (readonly, nonatomic) BOOL isRestrictedByApple;
@property (readonly, nonatomic) BOOL isRestrictedByEU_GDPR;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)idForClientType:(long long)a0;
- (void)setID:(id)a0 forClientType:(long long)a1;
- (id)_parseItunesFlags;
- (BOOL)iAdIDRecordsDirty;
- (id)initWithDSID:(id)a0 serializedRecord:(id)a1 version:(int)a2;
- (id)encryptedIDForClientType:(long long)a0;
- (id)idAccountsDictionaryRepresentation;
- (BOOL)shouldSendNotification;

@end
