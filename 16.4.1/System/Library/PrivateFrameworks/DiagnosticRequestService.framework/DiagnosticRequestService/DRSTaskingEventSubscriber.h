@class NSString;

@interface DRSTaskingEventSubscriber : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSString *teamID;

- (id)initWithTeamID:(id)a0 token:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
