@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (id)init;
- (id)filterEvent:(id)a0;
- (void)dealloc;

@end
