@class NSString;

@interface PHSandboxExtensionWrapper : NSObject {
    NSString *_token;
    long long _handle;
}

+ (id)wrapperWithToken:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;

@end
