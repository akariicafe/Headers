@class NSString, KCSharingParticipant;
@protocol DSIdentifiable;

@interface PMSeparationParticipant : NSObject <DSParticipation>

@property (readonly, nonatomic) KCSharingParticipant *participant;
@property (readonly, nonatomic) long long role;
@property (readonly, nonatomic) long long permission;
@property (readonly, nonatomic) id<DSIdentifiable> identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0 identity:(id)a1;

@end
