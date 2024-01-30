@class NSString, NSNumber;

@interface ICASBackgroundAppRefreshData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *automaticAppUpdatesAllowed;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAutomaticAppUpdatesAllowed:(id)a0;

@end
