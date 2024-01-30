@class NSString;

@interface CDMContextProtoSpanMatcher : NSObject <CDMDependentSpanMatcherProto>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (id)convertUserDialogAct:(id)a0;
- (id)matchSpansForTokenChain:(id)a0 withNLContext:(id)a1 withPreviousMatchedSpans:(id)a2;
- (id)extractEntityNamesFromNLContext:(id)a0;
- (id)matchSpanFromSpans:(id)a0 inTrie:(id)a1;
- (id)extractPrimitiveStringsFromUSOGraphs:(id)a0;
- (id)extractPrimitiveStringsFromDialogAct:(id)a0;
- (id)createQueryFromSpan:(id)a0;

@end
