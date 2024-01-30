@class NSString, NSArray, NSDate;

@interface CKSceneDelegateState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL composingNewMessage;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSArray *unreadLastMessages;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long filterMode;
@property (nonatomic) BOOL showingInbox;

+ (id)stateFromIsComposingNewMessage:(BOOL)a0 messageHasContent:(BOOL)a1 isShowingBlankTranscript:(BOOL)a2 isControllerCollapsed:(BOOL)a3 isTopVCChatNavigationController:(BOOL)a4 conversation:(id)a5 filterMode:(unsigned long long)a6 isShowingInbox:(BOOL)a7 unreadMessages:(id)a8;
+ (id)unarchivingClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUnreadMessages:(id)a0 groupID:(id)a1 composingNewMessage:(BOOL)a2 filterMode:(unsigned long long)a3 showingInbox:(BOOL)a4;

@end
