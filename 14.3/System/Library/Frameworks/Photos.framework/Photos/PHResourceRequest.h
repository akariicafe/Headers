@class NSString, NSURL;

@interface PHResourceRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) NSURL *assetObjectIDURL;
@property (nonatomic) BOOL wantsProgress;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 assetObjectIDURL:(id)a1;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
