@class NSMutableArray;

@interface _SBSUserNotificationTextFieldDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (void)addTextFieldDefinitionWithConfiguration:(id /* block */)a0;
- (id)build;
- (void).cxx_destruct;
- (id)init;

@end
