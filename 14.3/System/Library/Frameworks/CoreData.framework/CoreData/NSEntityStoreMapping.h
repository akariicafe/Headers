@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (void)setEntity:(id)a0;
- (void)dealloc;
- (void)setSubentityColumn:(id)a0;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)entity;
- (id)description;
- (void)setPropertyMappings:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned int)subentityID;
- (id)initWithEntity:(id)a0;
- (id)propertyMappings;
- (void)setSubentityID:(unsigned int)a0;
- (id)subentityColumn;
- (id)createTableStatement;
- (void)setSingleTableEntity:(BOOL)a0;
- (void)setPrimaryKeys:(id)a0;

@end
