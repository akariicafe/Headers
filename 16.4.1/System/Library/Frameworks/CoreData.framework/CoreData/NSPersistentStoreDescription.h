@class NSString, NSPersistentCloudKitContainerOptions, NSURL, NSDictionary, NSMutableDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {
    NSMutableDictionary *_options;
}

@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *type;
@property (copy) NSString *configuration;
@property (copy) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (getter=isReadOnly) BOOL readOnly;
@property double timeout;
@property (readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property BOOL shouldAddStoreAsynchronously;
@property BOOL shouldMigrateStoreAutomatically;
@property BOOL shouldInferMappingModelAutomatically;

+ (id)inMemoryPersistentStoreDescription;
+ (id)persistentStoreDescriptionWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)mirroringDelegate;
- (void)setValue:(id)a0 forPragmaNamed:(id)a1;
- (void)setUsesPersistentHistoryTracking:(BOOL)a0;
- (id)mirroringOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)usesPersistentHistoryTracking;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setMirroringDelegate:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)setOption:(id)a0 forKey:(id)a1;
- (void)setOption:(id)a0 forMirroringKey:(id)a1;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)a0;

@end
