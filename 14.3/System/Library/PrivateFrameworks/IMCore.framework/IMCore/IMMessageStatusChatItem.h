@class IMHandle, NSString, IMServiceImpl, NSDate, NSAttributedString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem> {
    NSDate *_timeAdded;
    NSDate *_timeStale;
}

@property (readonly, nonatomic) long long messageStatusType;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSString *errorText;
@property (readonly, nonatomic) long long expireStatusType;
@property (readonly, nonatomic) NSDate *dateOfStatus;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) BOOL wantsTail;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 statusType:(long long)a1 time:(id)a2 count:(unsigned long long)a3 expireStatusType:(long long)a4;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)a0;
- (id)_initWithItem:(id)a0 statusType:(long long)a1 time:(id)a2 count:(unsigned long long)a3;
- (id)_initWithItem:(id)a0 expireStatusType:(long long)a1 count:(unsigned long long)a2;

@end
