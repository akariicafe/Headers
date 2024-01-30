@interface CNPhotoPickerActionButtonBlockHandler : NSObject

@property (readonly, copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id)initWithActionBlock:(id /* block */)a0;
- (void)performAction;

@end
