@class NSString, NSDictionary, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *options;
@property (readonly) PHMemory *memory;
@property (readonly) NSString *rejectionCause;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 memoryInfo:(id)a1;

@end
