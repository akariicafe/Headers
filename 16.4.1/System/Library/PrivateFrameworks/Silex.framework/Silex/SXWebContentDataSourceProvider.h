@class NSString;
@protocol SXDOMObjectProviding, SXResourceDataSourceProvider;

@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataSourcesForReferences:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 resourceDataSourceProvider:(id)a1;

@end
