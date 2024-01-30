@class NSUUID, NSString;

@interface HSMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *hostEnvironment;
@property (retain, nonatomic) NSString *deviceEnvironment;

+ (id)supportedClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
