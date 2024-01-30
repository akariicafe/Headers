@class NSString, _INPBSelectionItem;

@interface _INPBPayloadConfirmation : PBCodable <_INPBPayloadConfirmation, NSSecureCoding, NSCopying> {
    struct { unsigned char sendAnnouncementIntentAnnouncementConfirmationReason : 1; unsigned char startCallIntentContactsConfirmationReason : 1; unsigned char reason : 1; unsigned char addTasksIntentTargetTaskListConfirmationReason : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int sendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentAnnouncementConfirmationReason;
@property (retain, nonatomic) _INPBSelectionItem *confirmationItem;
@property (readonly, nonatomic) BOOL hasConfirmationItem;
@property (nonatomic) int startCallIntentContactsConfirmationReason;
@property (nonatomic) BOOL hasStartCallIntentContactsConfirmationReason;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic) BOOL hasAddTasksIntentTargetTaskListConfirmationReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reasonAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReason:(id)a0;
- (id)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)a0;
- (int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(id)a0;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)a0;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)a0;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)a0;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)a0;
- (id)dictionaryRepresentation;

@end
