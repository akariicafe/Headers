@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;

- (id)init;
- (id)initWithName:(id)a0 print:(id)a1 speak:(id)a2;
- (id)initWithName:(id)a0 string:(id)a1;
- (id)initWithSharedPtr:(void *)a0;
- (void)setValuePrint:(id)a0 speak:(id)a1;

@end
