@class NSString;

@interface SXLinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowCopyingOfURL:(id)a0;
- (BOOL)allowOpenInNewWindowForURL:(id)a0;
- (BOOL)allowOpenInSafariForURL:(id)a0;

@end
