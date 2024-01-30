@class NSString;

@interface CHHapticDynamicParameter : NSObject

@property (readonly) NSString *parameterID;
@property float value;
@property double relativeTime;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParameterID:(id)a0 value:(float)a1 relativeTime:(double)a2;

@end
