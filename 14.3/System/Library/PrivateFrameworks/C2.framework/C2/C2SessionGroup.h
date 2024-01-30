@class NSString, C2Session, NSArray;

@interface C2SessionGroup : NSObject

@property (retain, nonatomic) NSString *configurationName;
@property (retain, nonatomic) C2Session *pinnedSessionAllowingExpiredDNS;
@property (retain, nonatomic) C2Session *pinnedSession;
@property (retain, nonatomic) C2Session *unpinnedSession;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) BOOL isEmpty;

- (void).cxx_destruct;
- (BOOL)removeSession:(id)a0;
- (id)initWithConfigurationName:(id)a0;
- (id)sessionForOptions:(id)a0;
- (void)setSession:(id)a0 forOptions:(id)a1;

@end
