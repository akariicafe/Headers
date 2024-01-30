@class NSString;

@interface CalLogFileWriter : CalLogWriter

@property (retain, nonatomic) NSString *path;
@property (nonatomic) int fileDescriptor;
@property (nonatomic) BOOL fileDescriptorIsValid;

- (void)write:(id)a0;
- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
