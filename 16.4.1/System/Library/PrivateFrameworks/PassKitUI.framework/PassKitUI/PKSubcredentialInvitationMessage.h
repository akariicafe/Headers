@class NSString, PKAppletSubcredentialSharingInvitation, UIImage, PKProtobufSubcredentialInvitationMessage;

@interface PKSubcredentialInvitationMessage : NSObject <PKSharingMessageExtensionMessage> {
    PKProtobufSubcredentialInvitationMessage *_protoMessage;
}

@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (copy, nonatomic) PKAppletSubcredentialSharingInvitation *watchInvitation;
@property (copy, nonatomic) NSString *dataString;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) UIImage *passThumbnailImage;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)urlRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)_subcredentialInvitationMessageDataURLWithData:(id)a0;
- (id)_subcredentialInvitationMessageDataWithDataURL:(id)a0;

@end
