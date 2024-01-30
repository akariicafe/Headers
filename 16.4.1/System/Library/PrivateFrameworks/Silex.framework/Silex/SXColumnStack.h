@class NSArray;

@interface SXColumnStack : NSObject

@property (readonly, nonatomic) NSArray *columnStack;

- (id)description;
- (void).cxx_destruct;
- (void)addComponentBlueprint:(id)a0;
- (id)allComponentsAfterComponent:(id)a0;
- (id)allComponentsBeforeComponent:(id)a0;
- (id)componentsAfterComponent:(id)a0;
- (id)componentsBeforeComponent:(id)a0;
- (id)initWithNumberOfColumns:(unsigned long long)a0;
- (unsigned long long)rangeInBounds:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
