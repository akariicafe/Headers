@class NSDictionary, NSArray;

@interface CNUIContainerContext : NSObject

@property (retain, nonatomic) NSDictionary *originalContainers;
@property (retain, nonatomic) NSArray *selectedContainers;
@property (readonly, nonatomic) NSArray *addedContainers;
@property (readonly, nonatomic) NSDictionary *removedContainers;

- (void).cxx_destruct;
- (void)addContainer:(id)a0;
- (void)removeContainer:(id)a0;
- (id)persistedContainers;
- (void)resetToInitialState;
- (id)initWithContainers:(id)a0;

@end
