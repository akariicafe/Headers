@class NSString;
@protocol SWLogger;

@interface SWLogMessageHandler : NSObject <SWMessageHandler>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)a0 securityOrigin:(id)a1;

@end
