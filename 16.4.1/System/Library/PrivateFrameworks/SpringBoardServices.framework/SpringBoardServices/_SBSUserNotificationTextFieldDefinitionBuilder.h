@class NSMutableArray;

@interface _SBSUserNotificationTextFieldDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)addTextFieldDefinitionWithConfiguration:(id /* block */)a0;

@end
