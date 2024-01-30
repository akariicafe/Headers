@class NSString, NSArray;

@interface WRReplyStoreInfo : NSObject

@property (readonly, nonatomic) unsigned long long defaultCount;
@property (readonly, nonatomic) NSString *defaultsDomain;
@property (readonly, nonatomic) NSString *defaultsKey;
@property (readonly, nonatomic) NSString *defaultsChangedNotificationName;
@property (readonly, nonatomic) BOOL supportsSmartReplies;
@property (readonly, nonatomic) NSArray *hiddenTinkerReplyKeys;

+ (id)infoForCategory:(unsigned long long)a0;

- (void).cxx_destruct;

@end
