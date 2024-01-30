@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)consume;
- (id)initWithExtension:(id)a0;
- (void)expel;

@end
