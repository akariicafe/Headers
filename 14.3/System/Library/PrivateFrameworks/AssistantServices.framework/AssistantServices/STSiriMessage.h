@class NSString, STContactAddress, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {
    BOOL _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)bodyText;
- (id)init;
- (id)effect;
- (void).cxx_destruct;
- (id)groupName;
- (void)setGroupName:(id)a0;
- (void)setEffect:(id)a0;
- (id)sendDate;
- (id)initWithCoder:(id)a0;
- (void)setBodyText:(id)a0;
- (id)recipientAddresses;
- (void)setRecipientAddresses:(id)a0;
- (void)setChatIdentifier:(id)a0;
- (id)attachmentURL;
- (void)setAttachmentURL:(id)a0;
- (BOOL)isOutbound;
- (id)subjectText;
- (id)groupNameId;
- (void)setGroupNameId:(id)a0;
- (void)setOutbound:(BOOL)a0;
- (id)senderInternalGUID;
- (void)_setSenderInternalGUID:(id)a0;
- (void)setSubjectText:(id)a0;
- (void)setSendDate:(id)a0;
- (id)_aceContextObjectValue;
- (id)chatIdentifier;
- (void)setSenderAddress:(id)a0;
- (id)senderAddress;
- (void)encodeWithCoder:(id)a0;

@end
