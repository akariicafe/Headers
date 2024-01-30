@class NSString;

@interface FFFeatureAttribute : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;

- (id)initWithName:(id)a0 value:(id)a1;
- (id)description;
- (BOOL)matchesAgainst:(id)a0;
- (void).cxx_destruct;

@end
