@class NSString, PHFetchResult;

@interface PXUpNextMemoriesGenerationResult : NSObject

@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly, nonatomic) NSString *debugInfo;

- (void).cxx_destruct;
- (id)initWithMemories:(id)a0 debugInfo:(id)a1;

@end
