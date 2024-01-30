@class NSArray;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (nonatomic) BOOL isSameDocumentNavigation;
@property (copy, nonatomic) NSArray *textSamples;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
