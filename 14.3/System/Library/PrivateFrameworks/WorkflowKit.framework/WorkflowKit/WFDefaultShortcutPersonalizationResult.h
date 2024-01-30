@class NSArray;

@interface WFDefaultShortcutPersonalizationResult : NSObject

@property (readonly, nonatomic) NSArray *personalizedDefaultShortcuts;

- (void).cxx_destruct;
- (id)description;
- (void)enumerateWorkflowRecordsWithBlock:(id /* block */)a0;
- (id)initWithPersonalizedDefaultShortcuts:(id)a0;

@end
