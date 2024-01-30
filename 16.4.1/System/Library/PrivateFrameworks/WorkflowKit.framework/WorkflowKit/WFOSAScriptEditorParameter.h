@class NSString;
@protocol WFOSAScriptEditorParameterDelegate;

@interface WFOSAScriptEditorParameter : WFParameter

@property (readonly, nonatomic) NSString *languageName;
@property (weak, nonatomic) id<WFOSAScriptEditorParameterDelegate> delegate;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (Class)singleStateClass;

@end
