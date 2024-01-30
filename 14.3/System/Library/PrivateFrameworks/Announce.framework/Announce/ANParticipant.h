@class NSString, NSDictionary;

@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *rapportID;
@property (retain, nonatomic) NSString *idsID;
@property (retain, nonatomic) NSString *homeKitID;
@property (retain, nonatomic) NSString *homeKitUserID;
@property (nonatomic) BOOL isAccessory;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)participantsFromUsersInHome:(id)a0;

- (id)initWithUser:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithSender:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)message;
- (id)initWithMessage:(id)a0;
- (void)clearIdentifiers;
- (void)encodeWithCoder:(id)a0;
- (id)messageForCompanion;
- (void)populateWithUser:(id)a0 andAccessory:(id)a1;
- (void)populateWithUser:(id)a0;
- (void)populateWithAccessory:(id)a0;
- (id)initWithUser:(id)a0 andAccessory:(id)a1;
- (void)populateWithDevice:(id)a0;

@end
