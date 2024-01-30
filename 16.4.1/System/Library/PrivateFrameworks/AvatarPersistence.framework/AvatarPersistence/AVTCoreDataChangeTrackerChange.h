@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange>

@property (readonly, nonatomic) NSString *recordIdentifier;
@property (readonly, nonatomic) long long changeType;

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordIdentifier:(id)a0 changeType:(long long)a1;

@end
