@class NSString;

@interface CHHapticDynamicParameter : NSObject

@property (readonly) NSString *parameterID;
@property float value;
@property double relativeTime;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)a0 value:(float)a1 relativeTime:(double)a2;

@end
