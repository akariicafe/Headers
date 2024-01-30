@class NSString;

@interface CalLogFileWriter : CalLogWriter

@property (retain, nonatomic) NSString *path;
@property (nonatomic) int fileDescriptor;
@property (nonatomic) BOOL fileDescriptorIsValid;

- (void).cxx_destruct;
- (void)write:(id)a0;
- (void)dealloc;
- (id)initWithParameters:(id)a0;
- (id)description;

@end
