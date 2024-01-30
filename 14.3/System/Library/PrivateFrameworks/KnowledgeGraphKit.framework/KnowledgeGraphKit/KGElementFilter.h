@class NSArray, NSDictionary;

@interface KGElementFilter : NSObject

@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSDictionary *properties;

+ (id)any;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabels:(id)a0 properties:(id)a1;

@end
