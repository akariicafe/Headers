@class NSUUID, NSURL;

@interface NSFileProviderRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) NSUUID *requestingApplicationIdentifier;
@property (copy, nonatomic) NSURL *requestingExecutable;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
