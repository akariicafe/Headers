@class NSString;

@interface PGCurationTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) NSString *niceDescription;

- (BOOL)isActive;
- (id)init;
- (id)debugDescription;
- (BOOL)isMatchingRequired;

@end
