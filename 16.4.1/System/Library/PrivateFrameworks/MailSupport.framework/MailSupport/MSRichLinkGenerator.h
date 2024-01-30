@class NSString;

@interface MSRichLinkGenerator : NSObject <MSRichLinkGeneration>

@property (class, readonly) MSRichLinkGenerator *linkGenerator;
@property (class, readonly) BOOL shouldUseRichLinks;
@property (class, readonly) NSString *titleConvertToRichLink;
@property (class, readonly) NSString *titleConvertToPlainLink;
@property (class, readonly) NSString *titleOpenLink;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createRichLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;

@end
