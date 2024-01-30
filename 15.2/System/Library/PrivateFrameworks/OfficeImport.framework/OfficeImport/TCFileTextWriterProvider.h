@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath;

- (id)initWithFilePath:(id)a0;
- (BOOL)setUp;
- (void).cxx_destruct;

@end
