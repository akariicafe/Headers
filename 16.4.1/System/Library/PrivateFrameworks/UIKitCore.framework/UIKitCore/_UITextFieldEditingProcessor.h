@protocol _UITextFieldEditingProcessorDelegate;

@interface _UITextFieldEditingProcessor : NSObject

@property (weak, nonatomic) id<_UITextFieldEditingProcessorDelegate> delegate;

- (void).cxx_destruct;
- (id)beginEditingWithTextStorage:(id)a0;
- (id)overridingEditingAttributesForAttributes:(id)a0 withOverrides:(id)a1;

@end
