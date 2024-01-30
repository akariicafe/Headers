@class NSString, NSMutableDictionary;

@interface INParameter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) Class parameterClass;
@property (copy, nonatomic) NSString *parameterKeyPath;
@property (retain, nonatomic) NSMutableDictionary *_indexesForSubKeyPaths;
@property (readonly, copy, nonatomic) NSString *_subscriptedKeyPath;

+ (id)parameterForClass:(Class)a0 keyPath:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_parameterValueForParameterizedObject:(id)a0;
- (id)_sanitizedKeyPathForKeyPath:(id)a0 removingSubscripts:(BOOL)a1;
- (void)_setIndexesForKeyPathWithSubscripts:(id)a0;
- (id)_valueOfObject:(id)a0 forRemainingKeyPath:(id)a1 inFullyQualifiedKeyPath:(id)a2;
- (unsigned long long)indexForSubKeyPath:(id)a0;
- (BOOL)isEqualToParameter:(id)a0;
- (id)parameterValue;
- (id)parameterizedObject;
- (void)setIndex:(unsigned long long)a0 forSubKeyPath:(id)a1;

@end
