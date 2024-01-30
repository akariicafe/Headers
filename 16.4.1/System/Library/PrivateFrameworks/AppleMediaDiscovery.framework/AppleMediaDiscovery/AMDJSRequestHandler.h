@interface AMDJSRequestHandler : NSObject

+ (void)wrapUp;
+ (id)handlePayload:(id)a0 error:(id *)a1;
+ (long long)getActionCode:(id)a0;

@end
