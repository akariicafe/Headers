@class BMFileAttributes, NSFileHandle;

@interface BMFileHandle : NSObject <NSSecureCoding> {
    BOOL _initialized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) BMFileAttributes *attributes;
@property (readonly, nonatomic) NSFileHandle *nsFileHandle;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)readDataWithError:(id *)a0;
- (BOOL)overwriteWithData:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (id)_initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (void).cxx_destruct;

@end
