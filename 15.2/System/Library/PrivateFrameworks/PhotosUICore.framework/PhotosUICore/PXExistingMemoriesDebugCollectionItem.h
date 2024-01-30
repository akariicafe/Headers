@class NSString, PHMemory;

@interface PXExistingMemoriesDebugCollectionItem : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) PHMemory *memory;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0;

@end
