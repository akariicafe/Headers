@class NSString, GDSubEntityIdentifier;

@interface GDVisualIdentifier : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>

@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier;
@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) double confidence;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
