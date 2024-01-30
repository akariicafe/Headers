@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription {
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}

@property (retain) NSExpression *derivationExpression;

+ (BOOL)supportsSecureCoding;

- (void)setRenamingIdentifier:(id)a0;
- (void)setReadOnly:(BOOL)a0;
- (void)setDefaultValue:(id)a0;
- (BOOL)isReadOnly;
- (void)_createCachesAndOptimizeState;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_propertyType;
- (void)setTransient:(BOOL)a0;
- (void)dealloc;
- (BOOL)isTransient;

@end
