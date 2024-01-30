@class NSNumber, INFriend, SpeakableLocation;

@interface SetGeoFenceIntent : INIntent

@property (nonatomic, retain) INFriend *friend;
@property (nonatomic, retain) NSNumber *notifyMe;
@property (nonatomic, retain) NSNumber *notifyOnce;
@property (nonatomic) long long trigger;
@property (nonatomic) long long action;
@property (nonatomic, retain) SpeakableLocation *location;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
