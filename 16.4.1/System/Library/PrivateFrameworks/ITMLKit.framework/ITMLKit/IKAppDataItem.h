@class NSString, IKAppPrototypeIdentifier, NSDictionary;

@interface IKAppDataItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IKAppPrototypeIdentifier *prototypeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dataDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 identifier:(id)a1 prototypeIdentifier:(id)a2 dataDictionary:(id)a3;
- (id)valueForPropertyPath:(id)a0;

@end
