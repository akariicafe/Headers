@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
    ASEmailItem *_ASEmailItem;
}

+ (BOOL)supportsSecureCoding;

- (id)preview;
- (BOOL)isDraft;
- (id)subject;
- (id)attachments;
- (void)encodeWithCoder:(id)a0;
- (BOOL)read;
- (id)sender;
- (id)body;
- (id)initWithCoder:(id)a0;
- (id)date;
- (id)messageClass;
- (id)description;
- (int)importance;
- (void).cxx_destruct;
- (id)folderID;
- (id)conversationId;
- (id)replyTo;
- (id)bcc;
- (id)cc;
- (id)from;
- (id)to;
- (BOOL)flagged;
- (int)bodySize;
- (BOOL)flaggedIsSet;
- (int)lastVerb;
- (id)longID;
- (BOOL)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (BOOL)readIsSet;
- (id)remoteID;
- (id)rfc822Data;
- (int)smimeType;
- (BOOL)verbIsSet;
- (int)bodyTruncated;
- (id)conversationIndex;
- (id)displayTo;
- (id)threadTopic;
- (id)initWithASEmailItem:(id)a0;

@end
