@class NSMutableDictionary;

@interface SFSSOspreyTTSClientFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *ospreyClientFactory;

+ (id)sharedInstance;

- (void)removeAll;
- (void).cxx_destruct;
- (id)init;
- (id)getOspreyClientByUrl:(id)a0 useBlazar:(BOOL)a1 enableAuthentication:(BOOL)a2;
- (id)getOspreyClientByUrl:(id)a0;

@end
