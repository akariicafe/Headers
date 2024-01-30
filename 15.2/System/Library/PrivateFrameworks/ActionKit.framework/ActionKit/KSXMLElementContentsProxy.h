@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy {
    id _target;
    KSXMLWriter *_XMLWriter;
    unsigned long long _elementsCount;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)ks_prepareWithTarget:(id)a0 XMLWriter:(id)a1;

@end
