@class WFDefaultShortcutPersonalizationContext;

@interface WFDefaultShortcutPersonalization : NSObject

@property (readonly, nonatomic) WFDefaultShortcutPersonalizationContext *context;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)generateDefaultShortcutsWithCompletionHandler:(id /* block */)a0;
- (void)personalizeDefaultShortcuts:(id)a0 completionHandler:(id /* block */)a1;

@end
