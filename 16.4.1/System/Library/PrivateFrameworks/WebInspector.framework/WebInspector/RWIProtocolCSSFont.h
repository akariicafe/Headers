@class NSString, NSArray;

@interface RWIProtocolCSSFont : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *variationAxes;
@property (nonatomic) BOOL synthesizedBold;
@property (nonatomic) BOOL synthesizedOblique;

- (id)initWithDisplayName:(id)a0 variationAxes:(id)a1;

@end
