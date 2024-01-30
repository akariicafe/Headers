@class MFMailboxUid, NSDate, NSArray, EFObservable, NSString, ECSubject, MFAddressAtomStatusManager, NSIndexSet;
@protocol EFObserver;

@interface MessageHeaderViewModel : MessageItemViewModel <MessageHeaderViewModelBuilder, NSCopying>

@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) ECSubject *subject;
@property (copy, nonatomic) MFMailboxUid *mailbox;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager;
@property (retain, nonatomic) EFObservable<EFObserver> *observableObserver;
@property (readonly, nonatomic) EFObservable *modelObservable;
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender;
@property (nonatomic) BOOL hasAttachments;
@property (copy, nonatomic) NSDate *dateReceived;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isFlagged) BOOL flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) BOOL replied;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic, getter=isVIP) BOOL VIP;
@property (nonatomic, getter=isNotify) BOOL notify;
@property (nonatomic, getter=isMute) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (BOOL)_flagsChangedInModel:(id)a0;
- (id)initWithItemBuilder:(id /* block */)a0;
- (id)updatedFlagsModelWithBuilder:(id /* block */)a0;
- (id)updatedModelWithMessage:(id)a0;

@end
