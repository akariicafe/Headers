@class NSSet;

@interface EKDirectorySearchQuery : NSObject

@property (retain, nonatomic) NSSet *terms;
@property (nonatomic) BOOL findGroups;
@property (nonatomic) BOOL findLocations;
@property (nonatomic) BOOL findResources;
@property (nonatomic) BOOL findUsers;
@property (nonatomic) unsigned long long resultLimit;

- (void).cxx_destruct;

@end
