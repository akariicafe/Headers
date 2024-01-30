@class CKMediaObject, IMMessage, NSString;

@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) CKMediaObject *mediaObject;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) double activityItemContentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewImageForMediaObject:(id)a0;
+ (BOOL)_mediaTypeSupportedForPinningPreview:(int)a0;
+ (id)previewableMediaObjectFromMessage:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 mediaObject:(id)a1 contentScale:(double)a2 attachedContactItemIdentifier:(id)a3;
- (id)activityItemView;

@end
