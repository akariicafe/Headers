@class NSString, NSArray, NSMutableDictionary, NSDate, GKCloudPlayer;

@interface GKGameSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) NSString *serverChangeTag;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) NSString *serverChangeTag;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (readonly, nonatomic) NSArray *badgedPlayers;

+ (void)removeSessionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postSession:(id)a0 didAddPlayer:(id)a1;
+ (void)loadSessionsInContainer:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postSession:(id)a0 player:(id)a1 didChangeConnectionState:(long long)a2;
+ (void)getSessionsForZone:(id)a0 completionHandler:(id /* block */)a1;
+ (void)createSessionInContainer:(id)a0 withTitle:(id)a1 maxConnectedPlayers:(long long)a2 completionHandler:(id /* block */)a3;
+ (void)postSession:(id)a0 didReceiveData:(id)a1 fromPlayer:(id)a2;
+ (void)loadSessionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)gk_sessionEventListeners;
+ (void)postSession:(id)a0 didReceiveMessage:(id)a1 withData:(id)a2 fromPlayer:(id)a3;
+ (void)postSession:(id)a0 didRemovePlayer:(id)a1;
+ (void)addEventListener:(id)a0;
+ (void)removeEventListener:(id)a0;
+ (void)postSession:(id)a0 player:(id)a1 didSaveData:(id)a2;
+ (void)getZonesWithCompletionHandler:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (void)updateWithSession:(id)a0;
- (id)description;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)getShareURLWithCompletionHandler:(id /* block */)a0;
- (void)saveData:(id)a0 completionHandler:(id /* block */)a1;
- (id)descriptionSubstitutionMap;
- (void)setConnectionState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)playersWithConnectionState:(long long)a0;
- (void)sendData:(id)a0 withTransportType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)sendMessageWithLocalizedFormatKey:(id)a0 arguments:(id)a1 data:(id)a2 toPlayers:(id)a3 badgePlayers:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)clearBadgeForPlayers:(id)a0 completionHandler:(id /* block */)a1;

@end
