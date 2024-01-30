@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (double)doubleValue;
- (id)initWithLevel:(id)a0;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (float)floatValue;
- (BOOL)booleanValue;
- (long long)longValue;
- (id)binaryValue;
- (id)stringValue;
- (id)fileValue;
- (int)intValue;
- (id)directoryValue;

@end
