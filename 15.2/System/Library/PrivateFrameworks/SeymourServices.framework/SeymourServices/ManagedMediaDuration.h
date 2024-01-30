@class NSString;

@interface ManagedMediaDuration : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double lowerBuffer;
@property (nonatomic) double upperBuffer;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
