@class NSURL, NSData;

@interface ARQLSandboxingURLWrapper : NSObject <NSSecureCoding> {
    NSURL *_promiseURL;
    NSData *_scope;
    NSData *_promiseScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;

+ (void)assembleURL:(id)a0 sandbox:(id)a1 physicalURL:(id)a2 physicalSandbox:(id)a3;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 report:(BOOL)a2 error:(id *)a3;
+ (id)wrapperWithURL:(id)a0 readonly:(BOOL)a1 error:(id *)a2;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 extensionClass:(const char *)a1 report:(BOOL)a2 error:(id *)a3;
- (id)issueSandboxExtensionForURL:(id)a0 extensionClass:(const char *)a1 report:(BOOL)a2 error:(id *)a3;

@end
