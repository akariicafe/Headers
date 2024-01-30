@interface HMI_CVML_Error : NSObject

+ (id)createNSErrorWithStatus:(long long)a0 andMessage:(id)a1;
+ (id)createNSExceptionWithStatus:(long long)a0 andMessage:(id)a1;

@end
