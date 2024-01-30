@interface HKOverlayContextLocation : NSObject

@property (readonly, nonatomic) long long sectionIndex;
@property (readonly, nonatomic) long long contextItemIndex;

- (BOOL)isEqual:(id)a0;
- (id)initWithSectionIndex:(long long)a0 contextItemIndex:(long long)a1;

@end
