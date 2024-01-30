@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *eSIMServerURL;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
