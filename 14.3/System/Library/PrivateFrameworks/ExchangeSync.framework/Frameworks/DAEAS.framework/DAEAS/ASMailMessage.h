@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
    ASEmailItem *_ASEmailItem;
}

+ (BOOL)supportsSecureCoding;

- (id)to;
- (id)cc;
- (id)bcc;
- (id)from;
- (id)preview;
- (id)body;
- (id)subject;
- (void).cxx_destruct;
- (BOOL)read;
- (id)replyTo;
- (id)attachments;
- (id)longID;
- (id)sender;
- (id)rfc822Data;
- (id)date;
- (BOOL)readIsSet;
- (BOOL)verbIsSet;
- (id)messageClass;
- (id)conversationId;
- (id)meetingRequestUUID;
- (BOOL)flaggedIsSet;
- (id)initWithCoder:(id)a0;
- (id)folderID;
- (int)smimeType;
- (id)meetingRequestMetaData;
- (BOOL)meetingRequestIsActionable;
- (BOOL)flagged;
- (id)description;
- (int)importance;
- (BOOL)isDraft;
- (id)remoteID;
- (int)lastVerb;
- (int)bodySize;
- (void)encodeWithCoder:(id)a0;
- (id)displayTo;
- (int)bodyTruncated;
- (id)threadTopic;
- (id)conversationIndex;
- (id)initWithASEmailItem:(id)a0;

@end
