@class NSString, NSUUID;

@interface STUniquedManagedObject : NSManagedObject

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *sortKey;

- (void)awakeFromInsert;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)updateUniqueIdentifier;

@end
