@class NSArray;

@interface PUSearchZeroKeywordSection : NSObject

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSArray *viewModels;

- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)a0 viewModels:(id)a1;

@end
