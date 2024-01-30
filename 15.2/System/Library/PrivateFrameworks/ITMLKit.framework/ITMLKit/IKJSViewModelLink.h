@class NSDictionary, IKDOMDocument;
@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink> {
    BOOL _isClosed;
    struct { BOOL hasDocumentDidChange; BOOL hasResponseDictionaryDidChange; } _delegateFlags;
}

@property (weak, nonatomic) id<IKJSViewModelLinkDelegate> delegate;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) IKDOMDocument *document;

- (void).cxx_destruct;
- (id)init;
- (void)close:(id)a0;
- (void)dealloc;
- (void)cancel;
- (id)asPrivateIKJSViewModelLink;
- (void)_unhandled;

@end
