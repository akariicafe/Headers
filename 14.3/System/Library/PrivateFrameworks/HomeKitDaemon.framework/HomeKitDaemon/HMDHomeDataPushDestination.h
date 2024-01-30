@class NSString, HMDUser;

@interface HMDHomeDataPushDestination : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *pushDestination;
@property (nonatomic) BOOL ignoreConfigCompare;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)a0 destination:(id)a1;

@end
