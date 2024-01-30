@protocol CNTCC;

@interface CNTCC : NSObject

@property (retain, nonatomic) id<CNTCC> tccServices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)accessPreflight;
- (void)simulate:(long long)a0;

@end
