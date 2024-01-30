@class NSString, CLSClass, NSArray, NSError, NSDate;

@interface CLSHandout : CLSAbstractHandout <CLSRelationable> {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    BOOL _reviewed;
}

@property (readonly, nonatomic) CLSClass *effectiveClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long state;
@property (nonatomic) long long publishingState;
@property (retain, nonatomic) NSError *publishError;
@property (retain, nonatomic) NSDate *dateLastReviewed;
@property (retain, nonatomic) NSDate *lastReviewedDate;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *collaborationStates;
@property (readonly, nonatomic) NSArray *attachmentCollaborationStates;
@property (nonatomic, getter=isReviewed) BOOL reviewed;

+ (id)relations;
+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)init;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)_adjustPublishingStateIfNeeded;
- (void)addHandoutAttachment:(id)a0;
- (void)removeHandoutAttachment:(id)a0;
- (void)addHandoutRecipient:(id)a0;
- (void)removeHandoutRecipient:(id)a0;

@end
