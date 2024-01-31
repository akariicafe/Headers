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
- (id)initWithEntity:(id)a0;
- (BOOL)isSingleTableEntity;
- (void)dealloc;
- (unsigned int)subentityID;
- (id)propertyMappings;
- (id)description;
- (id)subentityColumn;
- (id)primaryKeys;
- (BOOL)isEqual:(id)a0;

@end
