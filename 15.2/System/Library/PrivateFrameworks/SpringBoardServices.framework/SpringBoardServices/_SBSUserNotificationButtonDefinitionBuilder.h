@class NSMutableArray;

@interface _SBSUserNotificationButtonDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (void)addButtonDefinitionWithTitle:(id)a0 withConfiguration:(id /* block */)a1;
- (id)build;
- (void).cxx_destruct;
- (id)init;

@end
