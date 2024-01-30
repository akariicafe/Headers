@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

- (id)initWithExtension:(id)a0;
- (void)consume;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)expel;
- (void).cxx_destruct;

@end
