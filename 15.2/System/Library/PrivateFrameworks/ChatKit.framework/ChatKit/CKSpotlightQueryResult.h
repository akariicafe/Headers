@class LPLinkMetadata, NSString, NSURL, CKConversation, CSSearchableItem;

@interface CKSpotlightQueryResult : NSObject <QLPreviewItem>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CSSearchableItem *item;
@property (retain, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
