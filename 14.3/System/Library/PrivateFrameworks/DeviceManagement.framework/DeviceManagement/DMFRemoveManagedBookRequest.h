@class NSNumber, NSString;

@interface DMFRemoveManagedBookRequest : DMFTaskRequest

@property (copy, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *persistentID;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
