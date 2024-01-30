@class NSString;

@interface CLSAttachmentEvent : CLSInsightEvent

@property (copy, nonatomic) NSString *attachmentID;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *handoutID;
@property (copy, nonatomic) NSString *recipientPersonID;
@property (nonatomic) int handoutAttachmentType;
@property (nonatomic) long long contextType;
@property (copy, nonatomic) NSString *appIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)setAppIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithAttachmentID:(id)a0 classID:(id)a1 handoutID:(id)a2 eventType:(long long)a3;

@end
