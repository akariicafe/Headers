@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSCountedSet *additionalAttachments;
@property (nonatomic) long long primaryType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)a0;
- (unsigned long long)numberOfAdditionalAttachments;
- (void)addAttachmentOfType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAttachments:(id)a0;

@end
