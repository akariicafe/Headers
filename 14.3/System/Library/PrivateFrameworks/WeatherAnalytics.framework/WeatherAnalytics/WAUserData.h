@class NSString, NSNumber;

@interface WAUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSNumber *userStartDate;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithUserID:(id)a0 userStartDate:(id)a1;

@end
