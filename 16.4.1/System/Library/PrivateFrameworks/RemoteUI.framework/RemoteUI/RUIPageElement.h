@class RUIPage, NSString;

@interface RUIPageElement : RUIElement

@property (weak, nonatomic) RUIPage *page;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (id)staticValues;

@end
