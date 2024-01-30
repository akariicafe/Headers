@class NSString;

@interface GEOFeatureInfo : NSObject

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
