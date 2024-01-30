@class NSString;
@protocol CKDSystemAvailabilityWatcher;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject

@property (weak, nonatomic) id<CKDSystemAvailabilityWatcher> delegate;
@property (nonatomic) unsigned long long savedDelegateHash;
@property (copy, nonatomic) NSString *personaID;

- (void).cxx_destruct;
- (void)postSystemAvailabilityChanged:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
