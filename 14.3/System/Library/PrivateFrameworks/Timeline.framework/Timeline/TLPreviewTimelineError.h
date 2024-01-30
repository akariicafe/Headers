@class NSString;

@interface TLPreviewTimelineError : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long errorType;
@property (readonly, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithErrorType:(long long)a0 errorDescription:(id)a1 path:(id)a2;
- (id)initWithErrorType:(long long)a0 errorDescription:(id)a1;

@end
