@class NSURL, NSString;

@interface DIStatFS : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *mountedOnURL;
@property (readonly, copy, nonatomic) NSString *mountedFrom;
@property (readonly, nonatomic) unsigned long long blockSize;

- (id)initWithFileDescriptor:(int)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)logWithHeader:(id)a0;

@end
