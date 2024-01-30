@class NSString;

@interface _WKUserContentFilter : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleList> { void *m_ptr; } _contentRuleList;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithWKContentRuleList:(id)a0;

@end
