@class NSString, NSArray, NSDate, NSMutableArray, NSAttributedString;

@interface CKDBMessage : NSObject {
    NSString *_groupID;
    NSArray *_recipients;
    NSString *_voicemailString;
}

@property (readonly, copy, nonatomic) NSString *madridChatGUID;
@property (readonly, nonatomic) BOOL isVisibleByDefault;
@property (nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSMutableArray *mediaObjects;
@property (readonly, copy, nonatomic) NSString *attachmentText;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (readonly, nonatomic) NSString *plainBody;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *formattedAddress;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *madridRoomname;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *madridService;
@property (readonly, nonatomic) NSString *madridAccountLogin;
@property (readonly, nonatomic) NSString *madridAccountGUID;
@property (readonly, nonatomic) NSString *madridChatIdentifier;
@property (readonly, nonatomic) BOOL isMadrid;
@property (readonly, nonatomic) BOOL hasBeenRead;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isOutgoing;
@property (readonly, nonatomic) long long madridType;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSAttributedString *madridAttributedBody;

- (id)recipients;
- (void).cxx_destruct;
- (id)formattedAddress;
- (id)groupID;
- (id)initWithRecordID:(long long)a0;
- (id)attachmentText:(BOOL)a0;
- (id)description;
- (id)voicemailString;
- (id)initWithMadridMessageGUID:(id)a0;
- (BOOL)hasAttachments;
- (BOOL)senderIsVoicemail;
- (id)alertImage;
- (id)previewText;

@end
