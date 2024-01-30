@class NSUUID, NSArray, NSString, NSNumber;

@interface HMDMediaPlaybackActionEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDCoreDuetLogEvent>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) unsigned long long duetEventType;
@property (readonly, copy) NSArray *eventDataToLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isPlaybackArchivePresent;
@property (readonly, copy) NSNumber *playbackStateNumber;
@property (readonly, copy) NSNumber *volumeNumber;
@property (readonly, copy) NSNumber *sourceNumber;
@property (readonly) unsigned long long numberOfMediaProfiles;
@property (readonly, copy) NSArray *accessories;
@property (readonly, nonatomic) unsigned long long numAccessoriesInHome;
@property (readonly, nonatomic) unsigned long long numNonEmptyScenesInHome;
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, copy) NSString *sourceString;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithIsPlaybackArchivePresent:(BOOL)a0 playbackStateNumber:(id)a1 volumeNumber:(id)a2 sourceNumber:(id)a3 accessories:(id)a4;
- (id)metadataForAccessoryAtIndex:(unsigned long long)a0;
- (id)valueForAccessoryAtIndex:(unsigned long long)a0;

@end
