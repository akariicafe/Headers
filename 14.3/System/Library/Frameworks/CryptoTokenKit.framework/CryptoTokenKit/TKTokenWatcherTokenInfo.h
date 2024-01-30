@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject

@property (readonly, nonatomic) NSString *tokenID;
@property (readonly, nonatomic) NSString *driverName;
@property (readonly, nonatomic) NSString *slotName;

- (void).cxx_destruct;
- (id)initWithTokenInfo:(id)a0;

@end
