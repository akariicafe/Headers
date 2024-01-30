@class NSDictionary, NSArray;

@interface CNUIContainerContext : NSObject

@property (retain, nonatomic) NSDictionary *originalContainers;
@property (retain, nonatomic) NSArray *selectedContainers;
@property (readonly, nonatomic) NSArray *addedContainers;
@property (readonly, nonatomic) NSDictionary *removedContainers;

- (id)initWithContainers:(id)a0;
- (void).cxx_destruct;
- (void)addContainer:(id)a0;
- (id)persistedContainers;
- (void)removeContainer:(id)a0;
- (void)resetToInitialState;

@end
