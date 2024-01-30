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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
