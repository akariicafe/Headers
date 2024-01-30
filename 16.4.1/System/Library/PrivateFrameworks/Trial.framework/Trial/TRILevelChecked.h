@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (float)floatValue;
- (int)intValue;
- (id)stringValue;
- (long long)longValue;
- (id)initWithLevel:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)doubleValue;
- (id)binaryValue;
- (id)fileValue;
- (id)directoryValue;
- (BOOL)booleanValue;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
