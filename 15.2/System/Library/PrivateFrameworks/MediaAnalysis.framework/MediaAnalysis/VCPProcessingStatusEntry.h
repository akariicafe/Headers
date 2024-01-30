@class NSString, NSDate;

@interface VCPProcessingStatusEntry : NSObject

@property (readonly, nonatomic) unsigned long long taskID;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long attempts;
@property (readonly, nonatomic) NSDate *nextRetryDate;

+ (id)entryWithLocalIdentifier:(id)a0 andTaskID:(unsigned long long)a1 andStatus:(unsigned long long)a2 andAttempts:(unsigned long long)a3 andNextRetryDate:(id)a4;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 andTaskID:(unsigned long long)a1 andStatus:(unsigned long long)a2 andAttempts:(unsigned long long)a3 andNextRetryDate:(id)a4;

@end
