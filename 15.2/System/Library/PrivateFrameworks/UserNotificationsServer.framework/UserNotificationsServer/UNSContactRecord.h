@class NSString;

@interface UNSContactRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSString *handle;
@property (nonatomic) long long handleType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
