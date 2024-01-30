@class IMDChatRecord, NSString, NSArray, NSData, NSDate, NSAttributedString, IMDHandleRecord;

@interface IMDMessageRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long rawDate;
@property (readonly, nonatomic) NSDate *dateRead;
@property (readonly, nonatomic) long long rawDateRead;
@property (readonly, nonatomic) NSDate *dateDelivered;
@property (readonly, nonatomic) long long rawDateDelivered;
@property (readonly, copy, nonatomic) NSData *attributedBodyData;
@property (readonly, copy, nonatomic) NSAttributedString *attributedBodyText;
@property (readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) NSString *threadOriginatorGUID;
@property (readonly, nonatomic, getter=isReply) BOOL reply;
@property (readonly, nonatomic, getter=isAssociatedMessage) BOOL associatedMessage;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) IMDHandleRecord *handleRecord;
@property (readonly, nonatomic) NSArray *attachmentRecords;
@property (readonly, nonatomic) IMDChatRecord *chatRecord;
@property (readonly, nonatomic) NSDate *dateEdited;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (id)init;
- (struct __CFArray { } *)_localCache;
- (struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)cfMessageRecord;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (void *)_fetchUpdatedRecord;
- (int)_propertyIDForProperty:(long long)a0;
- (id)initWithItemType:(long long)a0 text:(id)a1 date:(long long)a2 dateRead:(long long)a3 dateDelivered:(long long)a4 datePlayed:(long long)a5 error:(long long)a6 type:(long long)a7 replaceID:(long long)a8 flags:(id)a9 guid:(id)a10 attributedBody:(id)a11 service:(id)a12 account:(id)a13 accountGUID:(id)a14 subject:(id)a15 handleID:(id)a16 countryCode:(id)a17 unformattedID:(id)a18 otherHandleID:(id)a19 groupTitle:(id)a20 groupActionType:(long long)a21 shareStatus:(long long)a22 shareDirection:(long long)a23 expireState:(long long)a24 messageActionType:(long long)a25 associatedMessageGUID:(id)a26 associatedMessageType:(long long)a27 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a28 balloonBundleID:(id)a29 payloadData:(id)a30 expressiveSendStyleID:(id)a31 timeExpressiveSendPlayed:(long long)a32 messageSummaryInfo:(id)a33 cloudKitSyncState:(long long)a34 cloudKitRecordID:(id)a35 cloudKitServerChangeTokenBlob:(id)a36 cloudKitRecordChangeTag:(id)a37 dataDetectorsInfo:(id)a38 destinationCallerID:(id)a39 replyToGUID:(id)a40 sortID:(long long)a41 threadOriginatorGUID:(id)a42 threadOriginatorPart:(id)a43 syndicationRanges:(id)a44 syncedSyndicationRanges:(id)a45 partCount:(long long)a46 dateEdited:(long long)a47;
- (long long)rawDateEdited;

@end
