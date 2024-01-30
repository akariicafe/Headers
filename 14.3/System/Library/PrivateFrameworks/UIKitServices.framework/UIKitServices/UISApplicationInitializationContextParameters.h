@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding>

@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (copy, nonatomic) NSArray *deviceFamilies;
@property (nonatomic) BOOL requiresFullScreen;
@property (nonatomic) BOOL supportsMultiwindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
