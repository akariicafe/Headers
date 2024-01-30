@class NSMutableArray;

@interface _SBSUserNotificationButtonDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)addButtonDefinitionWithTitle:(id)a0 withConfiguration:(id /* block */)a1;

@end
