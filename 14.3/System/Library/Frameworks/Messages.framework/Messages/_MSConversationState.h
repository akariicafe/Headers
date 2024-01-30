@class NSUUID, NSArray, MSMessage, NSString, NSData;

@interface _MSConversationState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *conversationIdentifier;
@property (retain, nonatomic) NSUUID *senderIdentifier;
@property (retain, nonatomic) NSArray *recipientIdentifiers;
@property (retain, nonatomic) MSMessage *activeMessage;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSData *conversationEngramID;
@property (retain, nonatomic, setter=setiMessageLoginID:) NSString *iMessageLoginID;
@property (retain, nonatomic) NSString *senderAddress;
@property (retain, nonatomic) NSArray *recipientAddresses;
@property (copy, nonatomic) NSArray *draftAssetArchives;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
