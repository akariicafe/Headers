@class TSUProgress;

@interface TSUProgressUserInfoObject : NSObject

@property (weak, nonatomic) TSUProgress *progress;
@property (retain, nonatomic) id progressObserver;

- (void).cxx_destruct;

@end
