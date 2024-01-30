@class NSString, PKAppletSubcredentialSharingInvitation, MSMessage, PKProtobufSubcredentialInvitationMessage;

@interface PKSubcredentialInvitationMessage : NSObject {
    PKProtobufSubcredentialInvitationMessage *_protoMessage;
}

@property (readonly, nonatomic) MSMessage *underlyingMessage;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *watchInvitation;
@property (copy, nonatomic) NSString *dataString;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *uniqueIdentifier;

- (id)initWithUnderlyingMessage:(id)a0;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (id)init;
- (void).cxx_destruct;
- (id)_subcredentialInvitationMessageDataWithDataURL:(id)a0;
- (id)_subcredentialInvitationMessageDataURLWithData:(id)a0;
- (id)description;

@end
