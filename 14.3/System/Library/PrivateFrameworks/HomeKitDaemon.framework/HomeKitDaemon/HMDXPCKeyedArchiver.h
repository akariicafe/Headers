@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;

- (void)_configure;
- (void)finishEncoding;
- (void).cxx_destruct;
- (id)encodedData;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)a0;

@end
