@class NSString;
@protocol SXLinkActionURLQualifier, SXHost, SXURLHandling, SXURLPreviewing;

@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXURLHandling> URLHandler;
@property (readonly, nonatomic) id<SXURLPreviewing> URLPreviewing;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) id<SXLinkActionURLQualifier> URLQualifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)open:(id)a0;
- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (id)previewActivityForAction:(id)a0;
- (id)initWithURLHandler:(id)a0 URLPreviewing:(id)a1 host:(id)a2 URLQualifier:(id)a3;
- (void)openInNewWindow:(id)a0;
- (void)openInSafari:(id)a0;

@end
