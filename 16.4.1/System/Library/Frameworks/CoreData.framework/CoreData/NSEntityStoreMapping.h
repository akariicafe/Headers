@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)initWithEntity:(id)a0;
- (id)entity;
- (id)primaryKeys;
- (unsigned int)subentityID;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)propertyMappings;
- (BOOL)isSingleTableEntity;
- (id)description;
- (id)subentityColumn;

@end
