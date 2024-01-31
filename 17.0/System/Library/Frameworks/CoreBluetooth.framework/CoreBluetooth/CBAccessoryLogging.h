@interface CBAccessoryLogging : NSObject

+ (unsigned long long)getComponentIDFromProductID:(unsigned long long)a0;
+ (unsigned long long)getComponentIDFromRadarReason:(int)a0;
+ (id)getComponentNameFromProductID:(unsigned long long)a0;
+ (id)getComponentNameFromRadarReason:(int)a0;
+ (id)getComponentVersionFromProductID:(unsigned long long)a0;
+ (id)getComponentVersionFromRadarReason:(int)a0;
+ (id)getProductNameFromProductID:(unsigned long long)a0;

@end
