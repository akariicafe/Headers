@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>

@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly, nonatomic, getter=isPrivateDataSyncingAllowed) BOOL privateDataSyncingAllowed;

+ (id)defaultAvailability;
+ (id)notAvailable;

- (id)initWithConditions:(id)a0;
- (void).cxx_destruct;

@end
