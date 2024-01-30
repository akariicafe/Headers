@class NSArray, NSDictionary, NSDate, IKAppContext;

@interface VUIActionPlay : VUIAction

@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) IKAppContext *appContext;
@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (void)playMediaInfo:(id)a0 isRentAndWatchNow:(BOOL)a1;
+ (void)_playPlayables:(id)a0 storeDictionary:(id)a1 appContext:(id)a2 isUpNextPlayback:(BOOL)a3 userPlaybackInitiationDate:(id)a4 openURLCompletionDate:(id)a5;
+ (void)_playMediaInfo:(id)a0 extrasInfo:(id)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;
+ (void)_presentPlaybackWithMediaInfo:(id)a0 extrasInfo:(id)a1 completion:(id /* block */)a2;
+ (void)_preflightWithMediaInfo:(id)a0 isRentAndWatchNow:(BOOL)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;

@end
