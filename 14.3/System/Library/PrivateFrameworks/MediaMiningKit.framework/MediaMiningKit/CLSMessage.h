@class NSString, NSData, NSDate, NSNumber;

@interface CLSMessage : NSObject

@property (readonly, nonatomic) struct _IMDMessageRecordStruct { } *messageRecord;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *recipientHandle;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) long long replaceID;
@property (readonly, nonatomic) long long fzDate;
@property (readonly, nonatomic) long long fzDateRead;
@property (readonly, nonatomic) long long fzDateDelivered;
@property (readonly, nonatomic) long long fzDatePlayed;
@property (readonly, nonatomic) long long handleID;
@property (readonly, nonatomic) long long fzError;
@property (readonly, nonatomic) long long fzType;
@property (readonly, nonatomic) long long otherHandleID;
@property (readonly, nonatomic) long long groupActionType;
@property (readonly, nonatomic) long long shareStatus;
@property (readonly, nonatomic) long long shareDirection;
@property (readonly, nonatomic) long long expireState;
@property (readonly, nonatomic) long long messageActionType;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) long long timeExpressiveSendPlayed;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;
@property (readonly, nonatomic) NSData *fzAttributedBody;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) NSData *messageSummaryInfo;
@property (readonly, nonatomic) NSNumber *fzFlags;
@property (readonly, nonatomic) NSString *fzGuid;
@property (readonly, nonatomic) NSString *fzBody;
@property (readonly, nonatomic) NSString *fzService;
@property (readonly, nonatomic) NSString *fzAccount;
@property (readonly, nonatomic) NSString *fzAccountGUID;
@property (readonly, nonatomic) NSString *fzSubject;
@property (readonly, nonatomic) NSString *roomnames;
@property (readonly, nonatomic) NSString *groupTitle;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) NSString *expressiveSendStyleID;
@property (readonly, nonatomic) NSString *destinationCallerID;

+ (void)enumerateAllMessagesWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)attachments;
- (BOOL)fromMe;
- (id)debugDescription;
- (id)initWithMessageRecord:(struct _IMDMessageRecordStruct { } *)a0;
- (BOOL)isMessage;

@end
