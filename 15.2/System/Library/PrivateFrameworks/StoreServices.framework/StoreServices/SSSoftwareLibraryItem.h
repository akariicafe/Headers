@class NSString, NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {
    NSMutableDictionary *_etags;
    NSMutableDictionary *_propertyValues;
}

@property (nonatomic, getter=isBeta) BOOL beta;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ETagForAssetType:(id)a0;
- (BOOL)setETag:(id)a0 forAssetType:(id)a1 error:(id *)a2;
- (id)_initWithITunesMetadata:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)dealloc;
- (void)_setValue:(id)a0 forProperty:(id)a1;

@end
