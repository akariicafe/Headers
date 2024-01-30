@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject

@property (nonatomic) BOOL waitingForReply;
@property (copy, nonatomic) NSData *userInfoData;
@property (copy, nonatomic) id /* block */ reply;

- (void).cxx_destruct;

@end
