@class NSString;

@interface PKSECredentialAddress : NSObject <NSCopying> {
    PKSECredentialAddress *_next;
    NSString *_identifier;
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long mostSpecificType;
@property (readonly, nonatomic) NSString *mostSpecificIdentifier;
@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly, nonatomic) NSString *subcredentialIdentifier;

- (id)shortDescription;
- (id)description;
- (id)firstIdentifierOfType:(unsigned long long)a0;
- (id)addressByAppendingType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendType:(unsigned long long)a0 identifier:(id)a1;
- (unsigned long long)hash;

@end
