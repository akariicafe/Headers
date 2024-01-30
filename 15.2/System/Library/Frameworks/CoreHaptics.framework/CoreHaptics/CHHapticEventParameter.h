@class NSString;

@interface CHHapticEventParameter : NSObject

@property (readonly) NSString *parameterID;
@property float value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)a0 value:(float)a1;

@end
