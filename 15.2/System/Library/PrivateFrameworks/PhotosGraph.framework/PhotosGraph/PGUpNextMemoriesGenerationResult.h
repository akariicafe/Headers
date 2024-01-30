@class NSArray, NSString, NSDictionary;

@interface PGUpNextMemoriesGenerationResult : NSObject

@property (readonly, nonatomic) NSArray *memoryLocalIdentifiers;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithMemoryLocalIdentifiers:(id)a0 debugInfo:(id)a1;

@end
