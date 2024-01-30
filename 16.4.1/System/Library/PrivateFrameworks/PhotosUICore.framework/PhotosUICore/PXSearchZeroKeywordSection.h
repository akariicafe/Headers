@class NSArray;

@interface PXSearchZeroKeywordSection : NSObject

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSArray *viewModels;

- (void)removeItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 viewModels:(id)a1;

@end
