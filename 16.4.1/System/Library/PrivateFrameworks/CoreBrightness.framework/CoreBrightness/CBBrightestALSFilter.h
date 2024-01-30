@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (void)dealloc;
- (id)filterEvent:(id)a0;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (id)init;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
