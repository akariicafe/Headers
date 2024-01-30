@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (float)floatValue;
- (long long)longValue;
- (int)intValue;
- (BOOL)booleanValue;
- (id)stringValue;
- (id)initWithLevel:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)doubleValue;
- (id)directoryValue;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)binaryValue;
- (id)fileValue;

@end
