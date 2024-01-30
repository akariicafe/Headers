@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *allowedKinds;
@property (readonly, copy, nonatomic) NSArray *allowedMatchStatus;
@property (readonly, copy, nonatomic) NSURL *restoreURL;
@property (readonly, nonatomic) BOOL shouldGZip;

- (void).cxx_destruct;
- (id)initWithServerConfiguration:(id)a0;

@end
