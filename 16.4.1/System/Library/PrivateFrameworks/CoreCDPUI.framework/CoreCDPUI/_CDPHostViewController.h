@class NSExtension;
@protocol NSCopying;

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface>

@property (retain, nonatomic) id<NSCopying> request;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (copy, nonatomic) id /* block */ viewServiceTerminationBlock;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(id /* block */)a0;

@end
