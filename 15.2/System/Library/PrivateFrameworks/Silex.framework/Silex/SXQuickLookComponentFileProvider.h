@class NSString;
@protocol SXDOMObjectProviding, SXDocumentShareURLProvider, SXResourceDataSource;

@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) id<SXDocumentShareURLProvider> shareURLProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
