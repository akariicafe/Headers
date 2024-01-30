@class NSString;

@interface FPDRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic, getter=isFromPOSIX) BOOL fromPOSIX;
@property (readonly, nonatomic) NSString *shortDescription;

+ (id)requestForSelf;
+ (id)requestForPID:(int)a0;
+ (id)requestForPID:(int)a0 fromPOSIX:(BOOL)a1;
+ (id)UUIDForExecutablePath:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)nsfpRequestWithIdentifier:(id)a0 forSession:(id)a1;
- (id)initWithPID:(int)a0 fromPOSIX:(BOOL)a1;

@end
