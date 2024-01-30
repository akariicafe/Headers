@class NSString;

@interface SGURLDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)urlsFromAttributes:(id)a0 handle:(id)a1 bundleIdentifier:(id)a2 domainIdentifier:(id)a3 uniqueIdentifier:(id)a4 documentTitle:(id)a5 documentDate:(id)a6 documentTimeInterval:(double)a7 receivedAt:(id)a8 isOutgoingDocument:(BOOL)a9;
- (id)_titleFromMessagesSynthesizedTextContent:(id)a0;
- (id)urlsFromURLs:(id)a0 handle:(id)a1 bundleIdentifier:(id)a2 domainIdentifier:(id)a3 uniqueIdentifier:(id)a4 documentTitle:(id)a5 documentDate:(id)a6 documentTimeInterval:(double)a7 receivedAt:(id)a8 isOutgoingDocument:(BOOL)a9;
- (id)supportedBundleIdentifiers;
- (unsigned char)_flagsForBundleIdentifier:(id)a0 documentDate:(id)a1 documentTimeInterval:(double)a2 isOutgoingDocument:(BOOL)a3;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)urlsFromText:(id)a0 handle:(id)a1 dataDetectorMatches:(id)a2 bundleIdentifier:(id)a3 domainIdentifier:(id)a4 uniqueIdentifier:(id)a5 documentTitle:(id)a6 documentDate:(id)a7 documentTimeInterval:(double)a8 receivedAt:(id)a9 isOutgoingDocument:(BOOL)a10;

@end
