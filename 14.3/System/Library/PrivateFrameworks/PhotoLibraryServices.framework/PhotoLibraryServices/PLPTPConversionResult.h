@class NSString;

@interface PLPTPConversionResult : NSObject

@property (readonly, copy) NSString *pathExtension;
@property (readonly) unsigned long long estimatedFileLength;

- (void).cxx_destruct;
- (id)initWithPathExtension:(id)a0 estimatedFileLength:(unsigned long long)a1;

@end
