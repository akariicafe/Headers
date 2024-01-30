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

+ (id)persistentStoreDescriptionWithURL:(id)a0;
+ (id)inMemoryPersistentStoreDescription;

- (void)setMirroringDelegate:(id)a0;
- (BOOL)usesPersistentHistoryTracking;
- (void)setOption:(id)a0 forKey:(id)a1;
- (id)mirroringOptions;
- (id)mirroringDelegate;
- (id)initWithURL:(id)a0;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)a0;
- (void)setUsesPersistentHistoryTracking:(BOOL)a0;
- (id)description;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (BOOL)isEqual:(id)a0;
- (void)setOption:(id)a0 forMirroringKey:(id)a1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setValue:(id)a0 forPragmaNamed:(id)a1;

@end
