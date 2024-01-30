@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL, _ANEProgramIOSurfacesMapper;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } l;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) _ANEProgramIOSurfacesMapper *mapper;
@property (nonatomic) unsigned long long string_id;
@property (copy, nonatomic) NSString *cacheURLIdentifier;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)new;
+ (id)modelAtURL:(id)a0 key:(id)a1;
+ (id)modelAtURLWithCacheURLIdentifier:(id)a0 key:(id)a1 cacheURLIdentifier:(id)a2;
+ (id)modelWithCacheURLIdentifier:(id)a0;
+ (id)modelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToModel:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)getCacheURLIdentifier;
- (id)initWithModelIdentifier:(id)a0;
- (id)procedureInfoForProcedureIndex:(unsigned int)a0;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 cacheURLIdentifier:(id)a2 modelAttributes:(id)a3 standardizeURL:(BOOL)a4;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 cacheURLIdentifier:(id)a2 modelAttributes:(id)a3 standardizeURL:(BOOL)a4 string_id:(unsigned long long)a5 generateNewStringId:(BOOL)a6;
- (id)inputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (id)outputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (void)resetOnUnload;
- (id)symbolIndicesForProcedureIndex:(unsigned int)a0 indexArrayKey:(id)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1 programHandle:(unsigned long long)a2 intermediateBufferHandle:(unsigned long long)a3 queueDepth:(char)a4;

@end
