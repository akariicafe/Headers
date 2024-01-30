@class NSDictionary, IKDOMDocument;
@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink> {
    BOOL _isClosed;
    struct { BOOL hasDocumentDidChange; BOOL hasResponseDictionaryDidChange; } _delegateFlags;
}

@property (weak, nonatomic) id<IKJSViewModelLinkDelegate> delegate;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) IKDOMDocument *document;

- (void)cancel;
- (void)dealloc;
- (void)close:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_unhandled;
- (id)asPrivateIKJSViewModelLink;

@end
