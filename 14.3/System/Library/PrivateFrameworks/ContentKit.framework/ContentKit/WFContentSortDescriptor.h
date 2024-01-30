@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer>

@property (readonly, nonatomic) WFContentProperty *property;
@property (readonly, copy, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSSet *containedProperties;

+ (id)sortDescriptorWithProperty:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;
+ (id)randomSortDescriptor;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;

@end
