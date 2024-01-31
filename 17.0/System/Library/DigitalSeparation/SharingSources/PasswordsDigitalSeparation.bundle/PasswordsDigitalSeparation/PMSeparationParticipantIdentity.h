@class NSString, NSPersonNameComponents;

@interface PMSeparationParticipantIdentity : NSObject <DSIdentifiable>

@property (readonly, copy, nonatomic) NSString *unifiedContactIdentifier;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
