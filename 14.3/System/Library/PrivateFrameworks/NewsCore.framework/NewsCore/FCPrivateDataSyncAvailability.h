@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>

@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly, nonatomic, getter=isPrivateDataSyncingAllowed) BOOL privateDataSyncingAllowed;

+ (id)defaultAvailability;
+ (id)notAvailable;

- (void).cxx_destruct;
- (id)initWithConditions:(id)a0;

@end
