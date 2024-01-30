@class NSError, NSData, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate>

@property (retain) NSError *error;
@property (retain) NSData *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)httpMethodInvocation:(id)a0 didFailWithError:(id)a1;
- (void)httpMethodInvocation:(id)a0 didFinishWithResult:(id)a1;

@end
