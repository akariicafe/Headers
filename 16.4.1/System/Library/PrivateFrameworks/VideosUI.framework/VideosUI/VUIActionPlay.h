@class VUIAppContext, NSString, NSDictionary, VUIActionPlayParams, NSArray, NSDate;

@interface VUIActionPlay : VUIAction

@property (retain, nonatomic) VUIActionPlayParams *actionPlayParams;
@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (readonly, nonatomic) NSString *playType;
@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)a0;
+ (void)_playMediaInfo:(id)a0 watchType:(long long)a1 extrasInfo:(id)a2 playType:(id)a3 isRentAndWatchNow:(BOOL)a4 completion:(id /* block */)a5;
+ (void)_playPlayables:(id)a0 appContext:(id)a1 watchType:(long long)a2 isUpNextPlayback:(BOOL)a3 userPlaybackInitiationDate:(id)a4 openURLCompletionDate:(id)a5 playType:(id)a6;
+ (void)_presentPlaybackWithMediaInfo:(id)a0 extrasInfo:(id)a1 playType:(id)a2 allowsCellular:(BOOL)a3 completion:(id /* block */)a4;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)initWithMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
