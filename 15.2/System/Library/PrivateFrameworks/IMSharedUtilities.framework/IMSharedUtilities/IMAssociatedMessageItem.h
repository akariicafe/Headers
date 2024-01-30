@class NSString, NSArray;

@interface IMAssociatedMessageItem : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;

- (BOOL)isMessageAcknowledgment;
- (BOOL)isMessageEdit;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 associatedMessageGUID:(id)a8 associatedMessageType:(long long)a9 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 messageSummaryInfo:(id)a11 threadIdentifier:(id)a12;
- (BOOL)isAssociatedMessageItem;
- (BOOL)isBreadcrumb;
- (BOOL)isSticker;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 errorType:(unsigned int)a25 associatedMessageGUID:(id)a26 associatedMessageType:(long long)a27 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a28 bizIntent:(id)a29 locale:(id)a30 messageSummaryInfo:(id)a31 threadIdentifier:(id)a32;
- (id)description;
- (id)initWithMessageItem:(id)a0;
- (id)initWithDictionary:(id)a0 hint:(id)a1;
- (id)copyForBackwardsCompatibility;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyDictionaryRepresentation;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isLastMessageCandidate;

@end
