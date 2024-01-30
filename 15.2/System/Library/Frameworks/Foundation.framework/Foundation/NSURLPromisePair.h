@class NSURL;

@interface NSURLPromisePair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURL *URL;
@property (readonly) NSURL *logicalURL;
@property (readonly) NSURL *physicalURL;

+ (id)pairWithURL:(id)a0;
+ (id)pairWithLogicalURL:(id)a0 physicalURL:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
