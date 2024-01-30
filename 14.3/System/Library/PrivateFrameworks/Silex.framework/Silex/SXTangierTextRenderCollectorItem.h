@class SXTextTangierFlowLayout, NSString, SXTextTangierStorage, SXTextTangierTextLayout, UIView, SXTextTangierFlowStorage, SXTextTangierFlowInfo;
@protocol TSDRepDirectLayerHosting;

@interface SXTangierTextRenderCollectorItem : NSObject {
    BOOL _selectable;
    SXTextTangierFlowInfo *_flowInfo;
    SXTextTangierStorage *_storage;
    SXTextTangierFlowStorage *_flowStorage;
    NSString *_componentIdentifier;
    UIView<TSDRepDirectLayerHosting> *_directLayerHost;
    SXTextTangierTextLayout *_layout;
    SXTextTangierFlowLayout *_flowLayout;
    struct _NSRange { unsigned long long location; unsigned long long length; } _flowRange;
}

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
