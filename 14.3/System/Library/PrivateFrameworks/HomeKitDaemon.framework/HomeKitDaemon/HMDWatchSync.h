@class NSUUID;

@interface HMDWatchSync : HMFObject

@property (nonatomic) unsigned long long syncOption;
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier;
@property (nonatomic) BOOL inProgress;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSyncOption:(unsigned long long)a0;

@end
