@class NSString, CCUIContentModuleContext;

@interface HUCCOpenURLHandler : NSObject <HUOpenURLHandling>

@property (readonly, nonatomic) CCUIContentModuleContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCCModuleContext:(id)a0;

@end
