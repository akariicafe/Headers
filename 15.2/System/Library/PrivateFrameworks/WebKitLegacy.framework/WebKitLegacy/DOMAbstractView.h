@class DOMDocument;

@interface DOMAbstractView : DOMObject

@property (readonly) DOMDocument *document;

- (void)dealloc;
- (void)_disconnectFrame;

@end
