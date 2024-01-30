@class NSString, NSMutableSet;

@interface STUniquedManagedObjectDelta : NSObject

@property (retain, nonatomic) NSMutableSet *updatedProperties;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long changeType;

- (void)deleted;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)inserted;
- (void).cxx_destruct;
- (void)removePropertyWithName:(id)a0;
- (void)updatedWithProperties:(id)a0;

@end
