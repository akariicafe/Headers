@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader

@property (retain) PHMediaFormatConversionDestination *destination;

- (id)path;
- (id)initWithDestination:(id)a0;
- (void).cxx_destruct;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;

@end
