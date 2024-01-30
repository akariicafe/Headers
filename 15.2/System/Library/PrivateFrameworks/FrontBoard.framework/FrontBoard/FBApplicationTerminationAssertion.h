@class NSString;

@interface FBApplicationTerminationAssertion : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long serialNumber;
@property (retain, nonatomic) id plugInHoldToken;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
