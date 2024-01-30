@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)cleanDownloadData;
- (id)clickCountByLine;
- (void)updateFrequencyCapData:(id)a0;
- (id)impressionCountByLine;
- (void).cxx_destruct;
- (id)init;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;

@end
