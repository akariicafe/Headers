@class NSURL;

@interface UARPDyanamicAssetLogManager : NSObject

@property (readonly) NSURL *baseURL;

- (id)initWithBaseURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)newLog:(id)a0 error:(id *)a1;

@end
