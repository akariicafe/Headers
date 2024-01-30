@class NSArray;
@protocol CRKASMRoster;

@interface CRKASMWorldBuildResultObject : NSObject

@property (readonly, nonatomic) id<CRKASMRoster> roster;
@property (readonly, copy, nonatomic) NSArray *manageableLocations;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoster:(id)a0 manageableLocations:(id)a1;

@end
