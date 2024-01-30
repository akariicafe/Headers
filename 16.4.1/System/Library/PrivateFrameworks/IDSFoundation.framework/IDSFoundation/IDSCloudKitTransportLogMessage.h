@class NSString, NSDictionary, ENGroupID, IDSDestinationPushToken, NSData;

@interface IDSCloudKitTransportLogMessage : NSObject

@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSString *secondaryID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *encryptionType;
@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) NSString *recipientAlias;
@property (readonly, nonatomic) NSString *senderAlias;
@property (readonly, nonatomic) IDSDestinationPushToken *destination;
@property (readonly, nonatomic) NSData *encryptedPayload;
@property (readonly, nonatomic) NSString *cypherIdentifier;

- (void).cxx_destruct;

@end
