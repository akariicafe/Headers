@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } l;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long string_id;

+ (id)sandboxExtensionPathsForModelURL:(id)a0;
+ (id)modelAtURL:(id)a0 key:(id)a1;
+ (id)new;
+ (id)modelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToModel:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;
- (void)updateModelAttributes:(id)a0;
- (void)updateModelAttributes:(id)a0 programHandle:(unsigned long long)a1 intermediateBufferHandle:(unsigned long long)a2 queueDepth:(char)a3;
- (id)keyForBundleID:(id)a0;

@end
