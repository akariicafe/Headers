@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (BOOL)setUp;

@end
