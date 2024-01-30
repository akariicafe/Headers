@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
