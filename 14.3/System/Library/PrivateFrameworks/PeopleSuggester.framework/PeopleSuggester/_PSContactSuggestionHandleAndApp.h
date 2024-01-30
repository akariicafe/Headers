@class NSString, NSNumber;

@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSNumber *interactionMechanism;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
