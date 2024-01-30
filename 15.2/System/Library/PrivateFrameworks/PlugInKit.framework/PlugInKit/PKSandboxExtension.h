@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

- (id)initWithExtension:(id)a0;
- (void)consume;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)expel;
- (void)dealloc;

@end
