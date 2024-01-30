@class NSString, UIImage;

@interface MUDisclosureActionViewModel : NSObject <MUDisclosureActionViewModelProviding>

@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
