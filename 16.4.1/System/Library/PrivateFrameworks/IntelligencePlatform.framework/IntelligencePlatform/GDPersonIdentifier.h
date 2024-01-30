@class NSString, GDSubEntityIdentifier;

@interface GDPersonIdentifier : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer>

@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
