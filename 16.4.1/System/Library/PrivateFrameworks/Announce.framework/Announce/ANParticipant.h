@class NSString, NSDictionary;

@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *rapportID;
@property (retain, nonatomic) NSString *idsID;
@property (retain, nonatomic) NSString *homeKitID;
@property (retain, nonatomic) NSString *homeKitUserID;
@property (nonatomic) BOOL isAccessory;
@property (nonatomic) BOOL isEndpoint;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)message;
- (void).cxx_destruct;
- (void)clearIdentifiers;
- (id)messageForCompanion;
- (id)initWithSender:(id)a0;

@end
