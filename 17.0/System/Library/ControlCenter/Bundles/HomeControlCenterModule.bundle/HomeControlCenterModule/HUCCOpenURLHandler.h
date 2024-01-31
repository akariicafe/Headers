@class NSString, CCUIContentModuleContext;

@interface HUCCOpenURLHandler : NSObject <HUOpenURLHandling>

@property (readonly, nonatomic) CCUIContentModuleContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)openURL:(id)a0;
- (id)initWithCCModuleContext:(id)a0;

@end
