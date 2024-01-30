@class _DKEventStream, NSSet, NSString, NSMutableSet;

@interface BMItemType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) BMItemType *toggledDoNotDisturb;
@property (class, readonly, copy, nonatomic) BMItemType *appIntentClass;
@property (class, readonly, copy, nonatomic) BMItemType *appIntentAutomationHash;
@property (class, readonly, copy, nonatomic) BMItemType *relevanceIntentHash;
@property (class, readonly, copy, nonatomic) BMItemType *relevanceCoarseIntentHash;
@property (class, readonly, copy, nonatomic) BMItemType *appActivityType;
@property (class, readonly, copy, nonatomic) BMItemType *relevanceAppActivityHash;
@property (class, readonly, copy, nonatomic) BMItemType *relevanceCoarseAppActivityHash;
@property (class, readonly, copy, nonatomic) BMItemType *toggledLowPowerMode;
@property (class, readonly, copy, nonatomic) BMItemType *firstBacklightAfterWakeup;
@property (class, readonly, copy, nonatomic) BMItemType *bluetoothConnectedToDevice;
@property (class, readonly, copy, nonatomic) BMItemType *bluetoothConnectedToDeviceWithName;
@property (class, readonly, copy, nonatomic) BMItemType *bluetoothConnectedToDeviceWithAddress;
@property (class, readonly, copy, nonatomic) BMItemType *mediaIsPlaying;
@property (class, readonly, copy, nonatomic) BMItemType *mediaGenreStartedPlaying;
@property (class, readonly, copy, nonatomic) BMItemType *hourOfDay;
@property (class, readonly, copy, nonatomic) BMItemType *hourOfDaySlot;
@property (class, readonly, copy, nonatomic) BMItemType *dayOfWeek;
@property (class, readonly, copy, nonatomic) BMItemType *isWeekend;
@property (class, readonly, copy, nonatomic) NSSet *temporalItemTypes;
@property (class, readonly, copy, nonatomic) BMItemType *appOpened;
@property (class, readonly, copy, nonatomic) BMItemType *appLaunchedReason;
@property (class, readonly, copy, nonatomic) BMItemType *appInFocus;
@property (class, readonly, copy, nonatomic) BMItemType *bundleIdOfShareExtensionOpened;
@property (class, readonly, copy, nonatomic) BMItemType *bundleIdOfHostOpenedShareExtension;
@property (class, readonly, copy, nonatomic) BMItemType *alarmSnoozedAny;
@property (class, readonly, copy, nonatomic) BMItemType *alarmStoppedAny;
@property (class, readonly, copy, nonatomic) BMItemType *alarmSnoozedWithID;
@property (class, readonly, copy, nonatomic) BMItemType *alarmStoppedWithID;
@property (class, readonly, copy, nonatomic) BMItemType *connectedToCarPlay;
@property (class, readonly, copy, nonatomic) BMItemType *locationIdentifier;
@property (class, readonly, copy, nonatomic) BMItemType *enterLocation;
@property (class, readonly, copy, nonatomic) BMItemType *exitLocation;
@property (class, readonly, copy, nonatomic) BMItemType *interactionMechanism;
@property (class, readonly, copy, nonatomic) BMItemType *interactionDirection;
@property (class, readonly, copy, nonatomic) BMItemType *interactionContentURL;
@property (class, readonly, copy, nonatomic) BMItemType *interactionSender;
@property (class, readonly, copy, nonatomic) BMItemType *interactionRecipients;
@property (class, readonly, copy, nonatomic) BMItemType *interactionPhotoScene;
@property (class, readonly, copy, nonatomic) BMItemType *interactionPhotoContact;
@property (class, readonly, copy, nonatomic) BMItemType *interactionPhotoLocation;
@property (class, readonly, copy, nonatomic) BMItemType *interactionUTIType;
@property (class, readonly, copy, nonatomic) BMItemType *interactionTextTopic;
@property (class, readonly, copy, nonatomic) BMItemType *interactionSharingSourceBundleID;
@property (class, readonly, copy, nonatomic) BMItemType *interactionTargetBundleID;
@property (class, readonly, copy, nonatomic) BMItemType *interactionExtractedTopicFromAttachment;
@property (class, readonly, copy, nonatomic) NSSet *interactionItemTypes;
@property (class, readonly, copy, nonatomic) BMItemType *connectedToExternalAudioOutput;
@property (class, readonly, copy, nonatomic) BMItemType *toggledAirplaneMode;
@property (class, readonly, copy, nonatomic) BMItemType *wifiConnectedToSSID;
@property (class, readonly, copy, nonatomic) BMItemType *wifiDisconnectedFromSSID;
@property (class, readonly, copy, nonatomic) BMItemType *wifiIsConnectedToSSID;
@property (class, readonly, nonatomic) NSMutableSet *allRegisteredItemTypes;
@property (class, readonly, copy, nonatomic) NSSet *allItemTypes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic) long long edge;
@property (retain, nonatomic) _DKEventStream *eventStream;
@property (copy, nonatomic) id /* block */ valueExtractBlock;

+ (id)allItemTypesDictionary;
+ (void)registerItemType:(id)a0;
+ (id)taskSpecificItemWithIdentifier:(id)a0 valueClass:(Class)a1;
+ (void)unregisterItemType:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extractEventFromDKEvent:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)extractValueFromDKEvent:(id)a0;
- (id)extractItemFromDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
