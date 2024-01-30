@class ADLandingCapData;

@interface ADLandingCapService : NSObject

@property (retain, nonatomic) ADLandingCapData *landingCapData;

- (void)cleanDownloadData;
- (void)updateDownloadData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)clickCountByLine;
- (void)updateFrequencyCapData:(id)a0;
- (id)impressionCountByLine;
- (void).cxx_destruct;
- (id)init;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;

@end
