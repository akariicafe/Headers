@class NSString, NSMutableDictionary;

@interface HPSDeviceAnalytics : NSObject {
    NSString *_entryPoint;
    NSMutableDictionary *_analyticDict;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetAnalyticDict;
- (void)submitDeviceAnalytics;
- (void)updateEntryPoint:(int)a0;
- (void)updateFeatureChangeCount:(int)a0;
- (void)updateFeatureValue:(int)a0 value:(unsigned int)a1 featureValueString:(id)a2;
- (void)updateProductID:(unsigned int)a0;

@end
