@interface CNPhotoPickerActionButtonBlockHandler : NSObject

@property (readonly, copy, nonatomic) id /* block */ actionBlock;

- (void)performAction;
- (void).cxx_destruct;
- (id)initWithActionBlock:(id /* block */)a0;

@end
