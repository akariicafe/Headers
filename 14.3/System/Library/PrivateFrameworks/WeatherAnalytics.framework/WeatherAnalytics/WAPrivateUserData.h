@class NSString;

@interface WAPrivateUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *privateUserID;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithPrivateUserID:(id)a0;

@end
