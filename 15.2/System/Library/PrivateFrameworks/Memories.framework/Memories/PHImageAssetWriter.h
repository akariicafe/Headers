@class NSData;

@interface PHImageAssetWriter : PHAssetWriter

@property (retain, nonatomic) NSData *data;

- (id)transfer;
- (id)request;
- (void).cxx_destruct;
- (unsigned long long)estimatedOutputSizeWithError:(id *)a0;

@end
