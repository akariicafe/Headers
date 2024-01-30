@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (id)clickCountByLine;
- (id)impressionCountByLine;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)cleanDownloadData;
- (void).cxx_destruct;

@end
