@class NSSet;

@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction

@property (retain, nonatomic) NSSet *sizeIndexes;
@property (retain, nonatomic) NSSet *multisizeImageSetRenditions;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)processRendition:(id)a0 withBackstop:(id)a1;

@end
