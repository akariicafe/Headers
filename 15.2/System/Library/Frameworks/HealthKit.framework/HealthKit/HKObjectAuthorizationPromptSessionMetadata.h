@class HKObjectType, NSArray;

@interface HKObjectAuthorizationPromptSessionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKObjectType *expectedObjectType;
@property (copy, nonatomic) NSArray *recordTypes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExpectedObjectType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
