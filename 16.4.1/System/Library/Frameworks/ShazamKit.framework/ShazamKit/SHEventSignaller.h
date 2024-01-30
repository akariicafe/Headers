@class NSString;

@interface SHEventSignaller : NSObject <SHEventSignalling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverConnection;

- (oneway void)sendEventSignal:(id)a0;

@end
