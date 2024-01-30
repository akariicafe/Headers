@class NSString, NSObject;
@protocol CKVSpanMatchResultInterpreterProvider, CKVSpanMatchSearchIndexProvider;

@interface CKVSpanMatcherFactory : NSObject <CKVSpanMatcherProvider> {
    NSObject<CKVSpanMatchSearchIndexProvider> *_searchIndexProvider;
    NSObject<CKVSpanMatchResultInterpreterProvider> *_interpreterProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
