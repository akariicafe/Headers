@class LPImage, FAInviteContext, LPLinkMetadata;

@interface FAInviteLinkMetadata : NSObject

@property (retain, nonatomic) FAInviteContext *context;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *icon;
@property (readonly, nonatomic) LPLinkMetadata *bubbleMetadata;
@property (readonly, nonatomic) LPLinkMetadata *mailMetadata;

- (void).cxx_destruct;

@end
