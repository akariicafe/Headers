@class NSString, UIView;

@interface VUIActionShareSheet : VUIAction

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) UIView *sourceView;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 viewElement:(id)a1 sourceView:(id)a2;

@end
