@class NSString;

@interface TRIPETLogHandler : NSObject <TRILogHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logEvent:(id)a0 subgroupName:(id)a1 queue:(id)a2;

@end
