@class NSObject;
@protocol OS_os_log;

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) long long scope;
@property (nonatomic) unsigned long long signpostID;


- (void).cxx_destruct;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)_verifyMatchingName:(id)a0;

@end
