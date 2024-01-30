@class NSString;

@interface _WKUserContentFilter : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleList> { void *m_ptr; } _contentRuleList;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithWKContentRuleList:(id)a0;

@end
