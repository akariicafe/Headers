@interface _UIContentViewEditingConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL useTextInputAsLabel;
@property (nonatomic) BOOL selectAllTextWhenEditingBegins;
@property (readonly, copy, nonatomic) id /* block */ didEndHandler;
@property (copy, nonatomic) id /* block */ shouldBeginHandler;
@property (copy, nonatomic) id /* block */ shouldChangeHandler;
@property (copy, nonatomic) id /* block */ shouldEndHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDidEndHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
