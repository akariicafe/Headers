@class NSString, GDEntityIdentifier, GDSubEntityIdentifier;

@interface GDPersonLink : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>

@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier;
@property (readonly, nonatomic) NSString *relationshipLabel;
@property (readonly, nonatomic) GDEntityIdentifier *linkedPersonEntityIdentifier;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
