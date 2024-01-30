@class NSNumber, NSDictionary, NSString;

@interface PKExtensionPointProxy : NSObject <PKExtensionPointProxy>

@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSDictionary *sdkEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionPointForIdentifier:(id)a0 platform:(id)a1;


@end
