@class NSString, GDEntityIdentifier, GDSubEntityIdentifier;

@interface GDLocationLink : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer>

@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier;
@property (readonly, nonatomic) GDEntityIdentifier *locationEntityIdentifier;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
