@class NSString, PHLibraryScope;

@interface PHACameraSmartSharingTask : NSObject <PHATask>

@property (retain, nonatomic) PHLibraryScope *libraryScope;
@property (retain, nonatomic) NSString *libraryScopeLocalIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
