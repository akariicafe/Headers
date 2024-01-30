@interface FileLocalXPC : BackendXPC

@property (readonly, nonatomic) int fileDescriptor;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 fileOpenMode:(unsigned short)a1;

@end
