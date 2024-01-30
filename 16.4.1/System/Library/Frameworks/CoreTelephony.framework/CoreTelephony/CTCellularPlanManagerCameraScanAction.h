@class NSString;

@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *smdpAddress;
@property (retain, nonatomic) NSString *matchingId;
@property (retain, nonatomic) NSString *OID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;

@end
