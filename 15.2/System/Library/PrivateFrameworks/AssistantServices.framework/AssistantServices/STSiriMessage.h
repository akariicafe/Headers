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

- (void)setAttachmentURL:(id)a0;
- (id)sendDate;
- (void)setGroupName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setRecipientAddresses:(id)a0;
- (BOOL)isOutbound;
- (id)groupName;
- (id)_aceContextObjectValue;
- (void)setBodyText:(id)a0;
- (id)subjectText;
- (id)groupNameId;
- (void)setGroupNameId:(id)a0;
- (void)setOutbound:(BOOL)a0;
- (id)senderInternalGUID;
- (void)_setSenderInternalGUID:(id)a0;
- (void)setSubjectText:(id)a0;
- (void)setSendDate:(id)a0;
- (id)effect;
- (void)setEffect:(id)a0;
- (void).cxx_destruct;
- (id)recipientAddresses;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)chatIdentifier;
- (void)setChatIdentifier:(id)a0;
- (void)setSenderAddress:(id)a0;
- (id)senderAddress;
- (id)bodyText;
- (id)attachmentURL;

@end
