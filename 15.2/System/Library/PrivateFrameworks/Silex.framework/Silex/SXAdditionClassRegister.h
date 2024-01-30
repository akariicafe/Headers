@class NSString;

@interface SXAdditionClassRegister : NSObject <SXClassRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerClasses;


@end
