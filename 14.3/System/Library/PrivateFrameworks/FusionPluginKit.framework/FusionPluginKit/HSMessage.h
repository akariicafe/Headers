@class NSUUID, NSString;

@interface HSMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *hostEnvironment;
@property (retain, nonatomic) NSString *deviceEnvironment;

+ (id)supportedClasses;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
