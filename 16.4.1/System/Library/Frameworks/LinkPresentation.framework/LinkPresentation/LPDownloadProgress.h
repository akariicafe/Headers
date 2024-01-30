@class NSString;

@interface LPDownloadProgress : NSObject

@property (nonatomic) double progress;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isFinished;

- (void).cxx_destruct;
- (id)initWithProgress:(double)a0 subtitle:(id)a1 isFinished:(BOOL)a2;

@end
