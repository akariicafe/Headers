@class TUConversationActivityMetadata, NSUUID, NSString, NSData, CKShare;

@interface TUMutableConversationActivityCreateSessionRequest : TUConversationActivityCreateSessionRequest

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSData *applicationContext;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) CKShare *share;
@property (nonatomic, getter=isStaticActivity) BOOL staticActivity;


@end
