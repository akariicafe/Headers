@class NSDictionary, NSString, NSDate;

@interface SSSoftwareUpdate : NSObject

@property (readonly, nonatomic) NSDictionary *updateDictionary;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) long long parentalControlsRank;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (nonatomic) long long updateState;

- (void)dealloc;
- (id)initWithUpdateDictionary:(id)a0;

@end
