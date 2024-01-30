@class NSSet;

@interface EKDirectorySearchResultSet : NSObject

@property (retain, nonatomic) NSSet *locations;
@property (retain, nonatomic) NSSet *groups;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *people;

- (void).cxx_destruct;

@end
