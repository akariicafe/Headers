@class NSString;

@interface CNMetricsReporter : NSObject <CNMetricsReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (void)logDatabaseResolution:(id)a0;
+ (void)sendDictionary:(id)a0 forEvent:(id)a1 andLog:(BOOL)a2;
+ (void)sendDictionary:(id)a0 forEvent:(id)a1;

@end
