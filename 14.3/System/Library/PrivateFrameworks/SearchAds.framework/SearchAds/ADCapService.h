@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateFrequencyCapData:(id)a0;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (id)impressionCountByLine;
- (id)clickCountByLine;
- (void)cleanDownloadData;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;

@end
