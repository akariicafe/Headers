@interface DDScanServer : DDScannerService

@property (nonatomic) long long options;
@property (nonatomic) double timeout;

- (id)init;
- (id)scanString:(id)a0;
- (void)scanString:(id)a0 resultsBlock:(id /* block */)a1;

@end
