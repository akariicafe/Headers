@class NSString, NSMutableArray;

@interface _SKUIInspectablePropertySection : NSObject

@property (copy, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) NSMutableArray *properties;

- (void).cxx_destruct;
- (id)init;

@end
