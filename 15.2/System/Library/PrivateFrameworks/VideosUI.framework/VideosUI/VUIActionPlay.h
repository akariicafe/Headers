@class VUIAppContext, NSArray, NSDictionary, NSDate;

@interface VUIActionPlay : VUIAction

@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;
+ (void)_playPlayables:(id)a0 appContext:(id)a1 watchType:(long long)a2 isUpNextPlayback:(BOOL)a3 userPlaybackInitiationDate:(id)a4 openURLCompletionDate:(id)a5;
+ (void)_playMediaInfo:(id)a0 watchType:(long long)a1 extrasInfo:(id)a2 isRentAndWatchNow:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_presentPlaybackWithMediaInfo:(id)a0 extrasInfo:(id)a1 allowsCellular:(BOOL)a2 completion:(id /* block */)a3;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
+ (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;

@end
