@class NSString, NSMutableSet;

@interface STUniquedManagedObjectDelta : NSObject

@property (retain, nonatomic) NSMutableSet *updatedProperties;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long changeType;

- (void).cxx_destruct;
- (void)inserted;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)deleted;
- (void)removePropertyWithName:(id)a0;
- (void)updatedWithProperties:(id)a0;

@end
