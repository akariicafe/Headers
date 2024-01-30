@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject

@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) BOOL allowWrite;

+ (id)infoFromCalDAVDetails:(id)a0 allowWrite:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithPrincipalPath:(id)a0 displayName:(id)a1 allowWrite:(BOOL)a2;
- (id)description;

@end
