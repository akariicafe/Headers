@class NSString;

@interface VUIActionARQLPreview : VUIAction

@property (retain, nonatomic) NSString *previewURLString;
@property (retain, nonatomic) NSString *shareURLString;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
