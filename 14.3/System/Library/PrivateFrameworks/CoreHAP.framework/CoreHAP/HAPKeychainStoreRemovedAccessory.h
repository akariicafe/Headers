@class NSString, NSError, NSDate;

@interface HAPKeychainStoreRemovedAccessory : HMFObject

@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSError *removeError;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 creationDate:(id)a1;

@end
