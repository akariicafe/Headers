@class NSArray;

@interface AKAvailabilityInvitation : NSObject

@property (readonly, nonatomic) NSArray *availableDuringActivityIdentifiers;

- (void).cxx_destruct;
- (id)initWithAvailableDuringActivityIdentifiers:(id)a0;
- (id)statusKitInvitationPayloadWithDateCreated:(id)a0;
- (id)_payloadDictionary;
- (id)initWithStatusKitInvitationPayload:(id)a0;

@end
