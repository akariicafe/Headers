@class NSURL, NSArray, NSString;

@interface SLCollaborationAttributionConversationDrawingMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isGroupConversation;
@property (readonly, nonatomic) NSURL *groupPhotoFileURL;
@property (readonly, nonatomic) NSArray *recipientDrawingMetadata;
@property (readonly, nonatomic) NSString *groupID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGroupPhotoFileURL:(id)a0 recipientDrawingMetadata:(id)a1 groupID:(id)a2;
- (id)initWithRecipientDrawingMetadata:(id)a0;

@end
