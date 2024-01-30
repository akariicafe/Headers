@interface CNPhotoPickerActionButtonBlockHandler : NSObject

@property (readonly, copy, nonatomic) id /* block */ actionBlock;

- (void)performAction;
- (id)initWithActionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
