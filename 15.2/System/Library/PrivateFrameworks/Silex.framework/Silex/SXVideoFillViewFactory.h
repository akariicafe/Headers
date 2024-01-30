@class NSString;
@protocol SXDOMObjectProviding, SXImageViewFactory;

@interface SXVideoFillViewFactory : NSObject <SXVideoFillViewFactory>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createVideoFillViewForVideoFill:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 imageViewFactory:(id)a1;

@end
