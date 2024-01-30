@class VUIMediaInfo;

@interface VUIActionPlayParams : NSObject

@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (nonatomic) long long watchType;
@property (nonatomic) BOOL isRentAndWatchNow;
@property (copy, nonatomic) id /* block */ completion;

+ (id)playParamsWithMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;

@end
