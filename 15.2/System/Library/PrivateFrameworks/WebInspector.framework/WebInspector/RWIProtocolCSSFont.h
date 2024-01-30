@class NSString, NSArray;

@interface RWIProtocolCSSFont : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *variationAxes;

- (id)initWithDisplayName:(id)a0 variationAxes:(id)a1;

@end
