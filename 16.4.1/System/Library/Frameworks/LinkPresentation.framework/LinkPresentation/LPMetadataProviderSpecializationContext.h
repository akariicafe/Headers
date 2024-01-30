@class NSString, NSURL, WKWebView, LPEvent;

@interface LPMetadataProviderSpecializationContext : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) BOOL hasLoadedResource;
@property (readonly, nonatomic) BOOL shouldFetchSubresources;
@property (readonly, retain, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) unsigned long long allowedSpecializations;
@property (retain, nonatomic) LPEvent *event;
@property (copy, nonatomic) id /* block */ eventGenerator;

- (void).cxx_destruct;
- (void)ensureEventWithSpecialization:(unsigned long long)a0;
- (id)initWithURL:(id)a0 MIMEType:(id)a1 webView:(id)a2 hasLoadedResource:(BOOL)a3 shouldFetchSubresources:(BOOL)a4 allowedSpecializations:(unsigned long long)a5;

@end
