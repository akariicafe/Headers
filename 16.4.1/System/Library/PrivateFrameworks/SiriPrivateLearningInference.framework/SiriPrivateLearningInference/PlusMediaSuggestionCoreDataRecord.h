@class NSUUID, NSString, NSData, NSOrderedSet, PlusMediaReferenceCoreDataRecord;

@interface PlusMediaSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *leftHandKey;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, retain) PlusMediaReferenceCoreDataRecord *inferredMediaReference;
@property (nonatomic, retain) NSOrderedSet *tags;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
