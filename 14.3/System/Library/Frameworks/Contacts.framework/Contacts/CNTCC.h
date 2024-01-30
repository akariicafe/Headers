@protocol CNTCC;

@interface CNTCC : NSObject

@property (retain, nonatomic) id<CNTCC> tccServices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)simulate:(long long)a0;
- (int)accessPreflight;

@end
