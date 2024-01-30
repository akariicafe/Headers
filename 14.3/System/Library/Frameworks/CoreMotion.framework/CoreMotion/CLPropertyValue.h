@interface CLPropertyValue : NSObject

@property (readonly, retain, nonatomic) id value;
@property (nonatomic) BOOL dirty;

- (void)dealloc;
- (id)initWithValue:(id)a0 dirty:(BOOL)a1;

@end
