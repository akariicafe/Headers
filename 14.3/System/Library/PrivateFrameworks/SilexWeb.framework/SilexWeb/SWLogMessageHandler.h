@class NSString;
@protocol SWLogger;

@interface SWLogMessageHandler : NSObject <SWMessageHandler>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (void)didReceiveMessage:(id)a0 securityOrigin:(id)a1;

@end
