@class NSString, NSArray, NSDate;

@interface CLSHandoutEvent : CLSInsightEvent

@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *handoutID;
@property (retain, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSArray *recipientIDs;
@property (copy, nonatomic) NSArray *attachmentDetails;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithClassID:(id)a0 handoutID:(id)a1 eventType:(long long)a2;

@end
