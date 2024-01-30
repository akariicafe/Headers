@class NSArray;

@interface WFDefaultShortcutPersonalizationResult : NSObject

@property (readonly, nonatomic) NSArray *personalizedDefaultShortcuts;

- (id)description;
- (void).cxx_destruct;
- (void)enumerateWorkflowRecordsWithBlock:(id /* block */)a0;
- (id)initWithPersonalizedDefaultShortcuts:(id)a0;

@end
