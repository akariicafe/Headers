@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL attributedThread;
@property (readonly) NSArray *topFrames;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTopCallStackFrames:(id)a0 isAttributedThread:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
