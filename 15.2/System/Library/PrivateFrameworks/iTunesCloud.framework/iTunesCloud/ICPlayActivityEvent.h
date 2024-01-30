@class NSData, NSString, NSArray, ICPlayActivityEnqueuerProperties, NSDate, ICPlayActivityEventItemIDs, ICPlayActivityAudioQualityProperties, NSTimeZone, ICPlayActivityEventContainerIDs, NSNumber;

@interface ICPlayActivityEvent : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long _persistentID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) unsigned long long autoPlayMode;
@property (readonly, copy, nonatomic) NSArray *buildFeatures;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs;
@property (readonly, nonatomic) unsigned long long containerType;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) unsigned long long endReasonType;
@property (readonly, copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;
@property (readonly, copy, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, copy, nonatomic) NSTimeZone *eventTimeZone;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *householdID;
@property (readonly, copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs;
@property (readonly, nonatomic) double itemDuration;
@property (readonly, nonatomic) double itemEndTime;
@property (readonly, nonatomic) double itemStartTime;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) unsigned long long lyricsDisplayedCharacterCount;
@property (readonly, copy, nonatomic) NSString *lyricsLanguage;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic, getter=isOffline) BOOL offline;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, copy, nonatomic) NSString *queueGroupingID;
@property (readonly, nonatomic) unsigned long long reasonHintType;
@property (readonly, copy, nonatomic) NSData *recommendationData;
@property (readonly, nonatomic) unsigned long long repeatPlayMode;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (readonly, nonatomic) unsigned long long shufflePlayMode;
@property (readonly, copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *storeFrontID;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, copy, nonatomic) NSData *timedMetadata;
@property (readonly, copy, nonatomic) NSData *trackInfo;
@property (readonly, nonatomic) unsigned long long audioQualityPreference;
@property (readonly, nonatomic) unsigned long long playbackFormatPreference;
@property (readonly, copy, nonatomic) ICPlayActivityAudioQualityProperties *targetedAudioQuality;
@property (readonly, copy, nonatomic) ICPlayActivityAudioQualityProperties *providedAudioQuality;
@property (readonly, nonatomic) unsigned long long sharedActivityGroupSizeCurrent;
@property (readonly, nonatomic) unsigned long long sharedActivityGroupSizeMax;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, copy, nonatomic) NSString *personalizedContainerID;
@property (readonly, copy, nonatomic) NSString *storeID;

- (void)encodeWithCoder:(id)a0;
- (Class)_mutableCopyClass;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToEvent:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
