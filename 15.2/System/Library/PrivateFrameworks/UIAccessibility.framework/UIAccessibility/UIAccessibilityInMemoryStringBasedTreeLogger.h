@class NSString, NSMutableString, NSMutableArray;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger> {
    NSMutableString *_stringRepresentation;
    NSMutableArray *_currentPrefix;
    NSString *_prefix;
    NSString *_descriptionKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pop;
- (id)stringRepresentation;
- (void)push;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPrefix:(id)a0;
- (void)logElement:(id)a0;
- (id)initWithPrefix:(id)a0 elementDescriptionKey:(id)a1;
- (id)initWithElementDescriptionKey:(id)a0;

@end
