@interface UsageAnalytics : ObjectAnalytics

- (id)init;
- (id)initWithWorkspace:(id)a0 withCache:(BOOL)a1;
- (id)usageMarkersWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1 fromDate:(id)a2 untilDate:(id)a3;
- (id)allUsageMarkersWithTag:(unsigned int)a0;
- (id)allUsageMarkersWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1;
- (id)lastHappenedWithTag:(unsigned int)a0;
- (id)lastHappenedWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1;
- (id)usageMarkersWithTag:(unsigned int)a0 fromDate:(id)a1 untilDate:(id)a2;

@end
