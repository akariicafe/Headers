@class NSNumber, EDAMContact;

@interface EDAMIdentity : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) EDAMContact *contact;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *deactivated;
@property (retain, nonatomic) NSNumber *sameBusiness;
@property (retain, nonatomic) NSNumber *blocked;
@property (retain, nonatomic) NSNumber *userConnected;
@property (retain, nonatomic) NSNumber *eventId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
