@class NSString;

@interface ManagedAssetRequestMediaStreamMetadata : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *thumbnailURL;
@property (nonatomic, copy) NSString *title;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
