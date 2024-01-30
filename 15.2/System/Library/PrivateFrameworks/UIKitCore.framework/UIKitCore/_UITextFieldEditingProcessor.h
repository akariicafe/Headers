@protocol _UITextFieldEditingProcessorDelegate;

@interface _UITextFieldEditingProcessor : NSObject

@property (weak, nonatomic) id<_UITextFieldEditingProcessorDelegate> delegate;

- (void).cxx_destruct;
- (id)overridingEditingAttributesForAttributes:(id)a0 withOverrides:(id)a1;
- (id)beginEditingWithTextStorage:(id)a0;

@end
