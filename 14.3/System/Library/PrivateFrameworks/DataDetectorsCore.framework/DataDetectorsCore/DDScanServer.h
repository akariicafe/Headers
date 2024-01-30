@interface DDScanServer : DDScannerService

@property (nonatomic) long long options;
@property (nonatomic) double timeout;

- (id)scanString:(id)a0;
- (id)init;
- (void)scanString:(id)a0 resultsBlock:(id /* block */)a1;

@end
