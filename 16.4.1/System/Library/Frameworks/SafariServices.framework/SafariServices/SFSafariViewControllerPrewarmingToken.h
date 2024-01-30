@class NSOrderedSet;

@interface SFSafariViewControllerPrewarmingToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *URLs;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;

@end
