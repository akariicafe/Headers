@class NSString;

@interface WFCoreDataObjectChange : NSObject

@property (readonly, nonatomic) NSString *URIRepresentation;
@property (readonly, nonatomic) unsigned long long objectType;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithObjectID:(id)a0 objectType:(unsigned long long)a1 identifier:(id)a2;

@end
