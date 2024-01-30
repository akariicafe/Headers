@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {
    NSMutableDictionary *_names;
}

+ (id)defaultMappingGenerator;
+ (void)invalidate;

- (id)generateTableName:(id)a0 isAncillary:(BOOL)a1;
- (id)init;
- (id)newUniqueNameWithBase:(unsigned short *)a0 withLength:(unsigned long long)a1;
- (void)dealloc;
- (id)newGeneratedPropertyName:(id)a0;
- (id)uniqueNameWithBase:(id)a0;

@end
