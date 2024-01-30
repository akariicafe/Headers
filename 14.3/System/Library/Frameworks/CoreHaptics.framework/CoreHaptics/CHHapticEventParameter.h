@class NSString;

@interface CHHapticEventParameter : NSObject

@property (readonly) NSString *parameterID;
@property float value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParameterID:(id)a0 value:(float)a1;

@end
