@class NSArray, GDEntityIdentifier;

@interface GDLocation : NSObject <GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTriplesIterator:(id)a0;

@end
