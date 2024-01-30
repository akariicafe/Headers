@class NSUserActivity;

@interface CPSceneSharingRequest : CPBaseSceneRequest

@property (retain, nonatomic) NSUserActivity *userActivity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
