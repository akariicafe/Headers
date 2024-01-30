@class NSString;
@protocol CKDSystemAvailabilityWatcher;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject

@property (weak, nonatomic) id<CKDSystemAvailabilityWatcher> delegate;
@property (nonatomic) unsigned long long savedDelegateHash;
@property (copy, nonatomic) NSString *personaID;

- (id)initWithDelegate:(id)a0;
- (void)postSystemAvailabilityChanged:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
