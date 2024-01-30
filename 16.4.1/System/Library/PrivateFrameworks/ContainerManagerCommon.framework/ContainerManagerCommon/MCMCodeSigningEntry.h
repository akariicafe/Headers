@class NSDictionary, NSArray;

@interface MCMCodeSigningEntry : NSObject

@property (retain, nonatomic) NSDictionary *codeSigningInfo;
@property (retain, nonatomic) NSArray *childBundleIdentifiers;
@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic, getter=isAdvanceCopy) BOOL advanceCopy;
@property (nonatomic, getter=isRegisteredByCaller) BOOL registeredByCaller;
@property (nonatomic, getter=isRegisteredByKernel) BOOL registeredByKernel;
@property (nonatomic) unsigned long long dataContainerClass;

- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithCodeSigningInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)serialize;
- (id)description;
- (id)initWithCodeSigningInfo:(id)a0 andDataContainerClass:(unsigned long long)a1;
- (void).cxx_destruct;

@end
