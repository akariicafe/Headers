@class NSString;

@interface PHSandboxExtensionWrapper : NSObject {
    NSString *_token;
    long long _handle;
}

+ (id)wrapperWithToken:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;

@end
