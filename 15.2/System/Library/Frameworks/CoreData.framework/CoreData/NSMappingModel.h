@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface NSMappingModel : NSObject <NSSecureCoding, NSCopying> {
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    struct __modelMappingFlags { unsigned char _isInUse : 1; unsigned int _reservedModelMapping : 31; } _modelMappingFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *entityMappings;
@property (readonly, copy) NSDictionary *entityMappingsByName;

+ (void)initialize;
+ (int)migrationDebugLevel;
+ (id)inferredMappingModelForSourceModel:(id)a0 destinationModel:(id)a1 error:(id *)a2;
+ (id)_newMappingModelFromBundles:(id)a0 forSourceHashes:(id)a1 destinationHashes:(id)a2;
+ (id)mappingModelFromBundles:(id)a0 forSourceModel:(id)a1 destinationModel:(id)a2;
+ (void)setMigrationDebugLevel:(int)a0;

- (void)_throwIfNotEditable;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithContentsOfURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEntityMappings:(id)a0;
- (void)dealloc;

@end
