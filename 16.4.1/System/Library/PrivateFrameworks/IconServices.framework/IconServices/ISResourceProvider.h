@class NSUUID, ISCustomRecipe, NSArray, NSData, NSString, NSMutableDictionary, NSDictionary, IFSymbol;
@protocol ISCompositorResource;

@interface ISResourceProvider : NSObject <ISCompositorResourceProvider>

@property (readonly) BOOL isDocumentBadge;
@property (readonly) BOOL isPrecomposed;
@property (readonly) ISCustomRecipe *customRecipe;
@property (retain) NSArray *sourceRecordIdentifiers;
@property (readonly) NSMutableDictionary *resourcesByResourceKey;
@property (retain) ISCustomRecipe *customRecipe;
@property unsigned long long lsDatabaseSequenceNumber;
@property (retain) NSUUID *lsDatabaseUUID;
@property (retain) NSData *resourceToken;
@property (retain) id<ISCompositorResource> iconResource;
@property (readonly) id<ISCompositorResource> templateIconResource;
@property (retain) NSDictionary *decorationResources;
@property unsigned long long iconShape;
@property BOOL isGenericProvider;
@property (readonly) NSData *validationToken;
@property unsigned long long options;
@property (readonly) IFSymbol *symbol;
@property BOOL placeholder;
@property (readonly) BOOL supportsGraphicIcons;
@property (readonly) BOOL onlySupportsGraphicIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultIconResourceProvider;
+ (id)resourceProviderWithLSIconReource:(id)a0;
+ (id)resourceProviderWithRecord:(id)a0 options:(unsigned long long)a1;
+ (id)resourceProviderWithTypeIdentifier:(id)a0 options:(unsigned long long)a1;
+ (id)resourceWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
+ (id)resourceWithRecord:(id)a0 options:(unsigned long long)a1;
+ (id)resourceWithTypeCode:(unsigned int)a0 options:(unsigned long long)a1;
+ (id)resourceWithTypeIdentifier:(id)a0 options:(unsigned long long)a1;

- (id)resourceNamed:(id)a0;
- (id)symbol;
- (id)init;
- (id)validationToken;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)resourceForKey:(id)a0;
- (BOOL)_isAppleResource;
- (id)iconResource;
- (id)initWithResource:(id)a0 templateResource:(id)a1;
- (void)setIconResource:(id)a0;

@end
