@class NSString, NSArray;

@interface FBKDiffableSection : NSObject

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSArray *rowIdentifiers;

@end
