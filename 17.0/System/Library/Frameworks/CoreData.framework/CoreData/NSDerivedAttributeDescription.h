@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription {
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}

@property (retain) NSExpression *derivationExpression;

+ (BOOL)supportsSecureCoding;

- (BOOL)isTransient;
- (void)setTransient:(BOOL)a0;
- (void)setDefaultValue:(id)a0;
- (BOOL)isReadOnly;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setReadOnly:(BOOL)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)setRenamingIdentifier:(id)a0;
- (unsigned long long)_propertyType;
- (id)description;
- (void)_createCachesAndOptimizeState;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isSchemaEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
