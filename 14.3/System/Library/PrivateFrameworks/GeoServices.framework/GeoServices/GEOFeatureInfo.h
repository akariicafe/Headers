@class NSString, NSArray;

@interface GEOFeatureInfo : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *environments;
@property (nonatomic) long long state;

- (id)initWithName:(id)a0 environments:(id)a1;
- (void).cxx_destruct;

@end
