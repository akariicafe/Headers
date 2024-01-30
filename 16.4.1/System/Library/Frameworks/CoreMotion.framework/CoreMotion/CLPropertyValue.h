@interface CLPropertyValue : NSObject

@property (readonly, retain, nonatomic) id value;
@property (nonatomic) BOOL dirty;

- (id)initWithValue:(id)a0 dirty:(BOOL)a1;
- (void)dealloc;

@end
