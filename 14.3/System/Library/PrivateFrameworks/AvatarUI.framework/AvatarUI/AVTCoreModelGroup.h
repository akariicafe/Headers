@class NSString, NSDictionary, NSArray;

@interface AVTCoreModelGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *symbolNames;
@property (readonly, copy, nonatomic) NSArray *categories;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 symbolNames:(id)a1 categories:(id)a2;
- (id)description;

@end
