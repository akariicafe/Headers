@class NSString, NSNumber;

@interface AFCoreAnalyticsDeviceContextPayload : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *nearbyProductType;
@property (readonly, copy, nonatomic) NSString *proximity;
@property (readonly, copy, nonatomic) NSNumber *alarmFiring;
@property (readonly, copy, nonatomic) NSNumber *timerFiring;
@property (readonly, copy, nonatomic) NSString *playbackState;
@property (readonly, copy, nonatomic) NSNumber *playbackRecency;
@property (readonly, copy, nonatomic) NSString *homeAnnouncementState;
@property (readonly, copy, nonatomic) NSNumber *homeAnnouncementRecency;
@property (readonly, copy, nonatomic) NSString *nearbyDevicesRequestIdentifier;
@property (readonly, copy, nonatomic) NSString *targetedResult;
@property (readonly, copy, nonatomic) NSString *contextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithNearbyProductType:(id)a0 proximity:(id)a1 alarmFiring:(id)a2 timerFiring:(id)a3 playbackState:(id)a4 playbackRecency:(id)a5 homeAnnouncementState:(id)a6 homeAnnouncementRecency:(id)a7 nearbyDevicesRequestIdentifier:(id)a8 targetedResult:(id)a9 contextIdentifier:(id)a10;

@end
