@class NSArray, NSMutableDictionary;

@interface ATXHomeScreenConfigurationComponents : NSObject {
    NSMutableDictionary *_stackForStackedWidgetIdDictionary;
}

@property (readonly, nonatomic) NSArray *pinnedWidgets;
@property (readonly, nonatomic) NSArray *stackedWidgets;
@property (readonly, nonatomic) NSArray *stacks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurations:(id)a0;
- (id)stackForStackedWidget:(id)a0;

@end
