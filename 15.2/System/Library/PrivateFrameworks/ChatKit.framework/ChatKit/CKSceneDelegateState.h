@class NSString, NSArray, NSDate;

@interface CKSceneDelegateState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL composingNewMessage;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSArray *unreadLastMessages;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long filterMode;
@property (nonatomic) BOOL showingInbox;

+ (id)unarchivingClasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUnreadMessages:(id)a0 groupID:(id)a1 composingNewMessage:(BOOL)a2 filterMode:(unsigned long long)a3 showingInbox:(BOOL)a4;
- (id)initWithCoder:(id)a0;

@end
