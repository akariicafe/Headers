@class NSSet, NSString;

@interface PGRelatedComputerOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *filteringLocalIdentifiers;
@property (copy, nonatomic) NSString *referenceAssetIdentifier;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL useDiversity;
@property (nonatomic) BOOL shouldIncludeContainingEventKey;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
