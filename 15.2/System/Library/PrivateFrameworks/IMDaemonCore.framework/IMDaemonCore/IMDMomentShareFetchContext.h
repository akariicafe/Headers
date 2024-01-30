@class IMDChat, PHMomentShare, IMMessageItem;

@interface IMDMomentShareFetchContext : NSObject

@property (retain, nonatomic) IMMessageItem *message;
@property (retain, nonatomic) IMDChat *chat;
@property (retain, nonatomic) PHMomentShare *momentShare;

+ (id)contextWithMomentShare:(id)a0 forMessage:(id)a1 inChat:(id)a2;

- (void).cxx_destruct;

@end
