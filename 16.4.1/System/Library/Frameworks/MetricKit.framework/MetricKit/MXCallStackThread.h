@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL attributedThread;
@property (readonly) NSArray *topFrames;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTopCallStackFrames:(id)a0 isAttributedThread:(BOOL)a1;

@end
