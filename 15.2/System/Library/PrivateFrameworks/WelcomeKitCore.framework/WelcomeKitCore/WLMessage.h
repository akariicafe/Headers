@class NSData, NSString, NSArray, NSDate, WLMessageParty, NSMutableArray, WLMessageSMILContext, WLSourceDeviceRecordSummary;

@interface WLMessage : NSObject {
    WLSourceDeviceRecordSummary *_summary;
    WLMessageSMILContext *_smilContext;
    NSMutableArray *_mimeParts;
}

@property (nonatomic) BOOL isGroupMessage;
@property (nonatomic) unsigned long long messageDirection;
@property (retain, nonatomic) WLMessageParty *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSData *mimeData;
@property (readonly, nonatomic) unsigned long long messageType;
@property (readonly, nonatomic) NSString *dateString;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) NSArray *attachments;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_populateMimeHeaders:(id)a0 recipients:(id)a1 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 ofString:(id)a3 addCountryCodeToParties:(BOOL)a4 sqlController:(id)a5;
+ (void)addRecipients:(id)a0 toMimeHeaders:(id)a1;
+ (id)_dateFormatterForMimeDateStrings;
+ (BOOL)_shouldIgnoreMessageThreadID;
+ (id)_fileNameForPart:(id)a0 smilContext:(id)a1;
+ (id)mimeHeadersFromMimeData:(id)a0 sqlController:(id)a1;
+ (id)dateFromMimeHeaders:(id)a0;
+ (id)senderFromMimeHeaders:(id)a0;
+ (id)recipientsFromMimeHeaders:(id)a0;

- (id)summary;
- (void).cxx_destruct;
- (void)setSummary:(id)a0;
- (void)progressiveMimeParser:(id)a0 beganMimePart:(id)a1;
- (void)progressiveMimeParser:(id)a0 finishedMimePart:(id)a1;
- (void)progressiveMimeParser:(id)a0 beganDataForMimePart:(id)a1;
- (void)progressiveMimeParser:(id)a0 failedWithError:(id)a1;
- (void)parseMIMEData:(id)a0 sqlController:(id)a1;

@end
