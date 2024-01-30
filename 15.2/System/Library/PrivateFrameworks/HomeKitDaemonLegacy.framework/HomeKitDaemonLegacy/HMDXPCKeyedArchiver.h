@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;

- (id)encodedData;
- (void)_configure;
- (void)finishEncoding;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)a0;

@end
