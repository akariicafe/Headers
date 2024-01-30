@protocol CNTCC;

@interface CNTCC : NSObject

@property (retain, nonatomic) id<CNTCC> tccServices;

+ (id)sharedInstance;

- (void)simulate:(long long)a0;
- (void).cxx_destruct;
- (int)accessPreflight;

@end
