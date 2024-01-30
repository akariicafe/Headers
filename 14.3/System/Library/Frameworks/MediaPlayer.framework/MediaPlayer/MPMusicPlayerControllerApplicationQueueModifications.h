@class NSDictionary, NSArray;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *insertedDescriptors;
@property (readonly, nonatomic) NSArray *removedItemIdentifiers;

- (void).cxx_destruct;
- (id)initWithInsertedDescriptors:(id)a0 removedItemIdentifiers:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
