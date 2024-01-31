@class NSNumber;

@interface BAAppExtensionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *restrictedDownloadSizeRemaining;
@property (readonly) NSNumber *restrictedEssentialDownloadSizeRemaining;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
