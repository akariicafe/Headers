@class NSArray, NSString;

@interface DNDSPlaceholderModesRecord : NSObject <NSCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSArray *placeholderModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backingStoreWithFileURL:(id)a0;
+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithModePlaceholders:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;

@end
