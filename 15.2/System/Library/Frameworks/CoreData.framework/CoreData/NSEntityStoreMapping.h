@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)entity;
- (BOOL)isSingleTableEntity;
- (id)subentityColumn;
- (id)initWithEntity:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)primaryKeys;
- (id)propertyMappings;
- (unsigned int)subentityID;

@end
