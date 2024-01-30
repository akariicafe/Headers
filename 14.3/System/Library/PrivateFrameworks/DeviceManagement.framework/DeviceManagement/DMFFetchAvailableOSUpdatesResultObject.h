@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFOSUpdate *update;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUpdate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
