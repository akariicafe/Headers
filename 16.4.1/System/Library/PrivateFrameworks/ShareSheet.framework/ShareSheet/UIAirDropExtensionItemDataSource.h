@class NSString;

@interface UIAirDropExtensionItemDataSource : NSObject <UIActivityExtensionItemDataProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_airdropSupplementalSecurityContextForURL:(id)a0;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;


@end
