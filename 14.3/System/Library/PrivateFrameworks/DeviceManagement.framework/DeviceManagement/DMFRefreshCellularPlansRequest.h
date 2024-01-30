@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *eSIMServerURL;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
