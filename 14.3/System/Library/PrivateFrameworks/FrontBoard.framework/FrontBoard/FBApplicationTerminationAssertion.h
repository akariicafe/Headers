@class NSString;

@interface FBApplicationTerminationAssertion : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long serialNumber;
@property (retain, nonatomic) id plugInHoldToken;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
