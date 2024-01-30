@class NSString;

@interface SXPlaceholderArticleThumbnailComponentSizerFactory : NSObject <SXComponentSizerFactory>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;

@end
