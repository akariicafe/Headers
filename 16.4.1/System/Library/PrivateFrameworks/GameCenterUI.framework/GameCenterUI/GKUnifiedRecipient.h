@class NSString, CNContact;

@interface GKUnifiedRecipient : NSObject

@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CNContact *contact;

+ (id)recipientForContact:(id)a0;
+ (id)recipientForHandle:(id)a0;

- (id)displayName;
- (void).cxx_destruct;

@end
