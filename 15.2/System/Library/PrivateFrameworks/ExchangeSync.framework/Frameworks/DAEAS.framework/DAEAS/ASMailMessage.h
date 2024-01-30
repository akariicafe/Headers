@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
    ASEmailItem *_ASEmailItem;
}

+ (BOOL)supportsSecureCoding;

- (id)to;
- (BOOL)isDraft;
- (id)preview;
- (void)encodeWithCoder:(id)a0;
- (id)sender;
- (id)longID;
- (int)importance;
- (id)description;
- (BOOL)flagged;
- (id)replyTo;
- (BOOL)read;
- (id)date;
- (id)attachments;
- (id)conversationId;
- (id)messageClass;
- (id)folderID;
- (void).cxx_destruct;
- (id)cc;
- (id)from;
- (id)subject;
- (id)initWithCoder:(id)a0;
- (id)remoteID;
- (int)lastVerb;
- (int)bodySize;
- (id)body;
- (id)bcc;
- (BOOL)readIsSet;
- (BOOL)verbIsSet;
- (int)smimeType;
- (id)rfc822Data;
- (id)meetingRequestUUID;
- (BOOL)flaggedIsSet;
- (id)meetingRequestMetaData;
- (BOOL)meetingRequestIsActionable;
- (id)displayTo;
- (int)bodyTruncated;
- (id)threadTopic;
- (id)conversationIndex;
- (id)initWithASEmailItem:(id)a0;

@end
