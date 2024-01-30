@class NSArray, NSString, NSData, NSDate, ASMeetingRequest;

@interface ASEmailItem : ASChangedCollectionLeaf {
    BOOL _shouldIncludeExceptionDateInUid;
}

@property (retain, nonatomic, setter=_setMeetingRequest:) ASMeetingRequest *meetingRequest;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *from;
@property (copy, nonatomic) NSArray *replyTo;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *displayTo;
@property (nonatomic) int importance;
@property (nonatomic) BOOL read;
@property (nonatomic) BOOL flagged;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) int bodySize;
@property (nonatomic) BOOL bodyTruncated;
@property (retain, nonatomic) NSString *messageClass;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSString *threadTopic;
@property (retain, nonatomic) NSData *conversationId;
@property (retain, nonatomic) NSData *conversationIndex;
@property (retain, nonatomic) NSString *mimeData;
@property (retain, nonatomic) NSString *folderId;
@property (retain, nonatomic) NSString *longID;
@property (nonatomic) int lastVerb;
@property (retain, nonatomic) NSString *sender;
@property (nonatomic) BOOL readIsSet;
@property (nonatomic) BOOL flaggedIsSet;
@property (nonatomic) BOOL verbIsSet;
@property (readonly, nonatomic) NSString *meetingRequestUUID;
@property (readonly, nonatomic) NSData *meetingRequestMetaData;
@property (readonly, nonatomic) int meetingMessageType;
@property (nonatomic) int bodyType;
@property (copy, nonatomic) NSArray *bcc;
@property (nonatomic) BOOL isDraft;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) BOOL hasAttachments;

+ (BOOL)supportsSecureCoding;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isSearchResult;
- (void)_processApplicationData:(BOOL)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (void)processAppDataForStream;
- (void)setBCCString:(id)a0;
- (void)setCCString:(id)a0;
- (void)setFromString:(id)a0;
- (void)setReplyToString:(id)a0;
- (void)setToString:(id)a0;

@end
