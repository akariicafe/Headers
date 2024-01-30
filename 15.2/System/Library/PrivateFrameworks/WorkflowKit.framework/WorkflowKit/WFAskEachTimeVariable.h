@class NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (readonly, nonatomic) NSString *prompt;

- (id)iconSymbolName;
- (id)init;
- (id)name;
- (BOOL)isAvailable;
- (id)initWithPrompt:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsAggrandizements;
- (BOOL)requiresModernVariableSupport;

@end
