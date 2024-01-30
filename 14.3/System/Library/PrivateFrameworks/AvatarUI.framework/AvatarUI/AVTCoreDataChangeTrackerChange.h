@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange>

@property (readonly, nonatomic) NSString *recordIdentifier;
@property (readonly, nonatomic) long long changeType;

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRecordIdentifier:(id)a0 changeType:(long long)a1;

@end
