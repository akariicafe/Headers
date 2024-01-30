@class NSArray;

@interface AKAvailabilityInvitation : NSObject

@property (readonly, nonatomic) NSArray *availableDuringActivityIdentifiers;
@property (readonly, nonatomic) NSArray *unavailableDuringActivityIdentifiers;

- (void).cxx_destruct;
- (id)initWithAvailableDuringActivityIdentifiers:(id)a0;
- (id)initWithAvailableDuringActivityIdentifiers:(id)a0 unavailableDuringActivityIdentifiers:(id)a1;
- (id)statusKitInvitationPayloadWithDateCreated:(id)a0;
- (id)_payloadDictionary;
- (id)initWithStatusKitInvitationPayload:(id)a0;

@end
