@class IKViewElement;

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController

@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly, nonatomic) BOOL matchParentHeight;
@property (nonatomic) BOOL embedded;
@property (readonly, nonatomic) id preferredLayoutGuide;
@property (readonly, nonatomic) long long preferredLayoutAttribute;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithViewElement:(id)a0;

@end
