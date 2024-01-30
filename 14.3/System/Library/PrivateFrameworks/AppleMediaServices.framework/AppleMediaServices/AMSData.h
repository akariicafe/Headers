@interface AMSData : NSObject

+ (id)objectWithData:(id)a0 encoding:(long long)a1 error:(id *)a2;
+ (id)decompressedDataWithGzippedData:(id)a0;
+ (id)dataWithObject:(id)a0 encoding:(long long)a1 error:(id *)a2;
+ (id)compressedGzippedDataWithData:(id)a0;
+ (id)objectWithData:(id)a0 response:(id)a1 error:(id *)a2;
+ (long long)_dataEncodingFromResponse:(id)a0;

@end
