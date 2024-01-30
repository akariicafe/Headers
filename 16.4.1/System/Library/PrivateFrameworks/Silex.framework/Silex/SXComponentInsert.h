@protocol SXInsertableComponent, SXComponentLayout, SXComponent;

@interface SXComponentInsert : NSObject

@property (readonly, nonatomic) id<SXComponent, SXInsertableComponent> component;
@property (readonly, nonatomic) id<SXComponentLayout> componentLayout;

- (id)description;
- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1;

@end
