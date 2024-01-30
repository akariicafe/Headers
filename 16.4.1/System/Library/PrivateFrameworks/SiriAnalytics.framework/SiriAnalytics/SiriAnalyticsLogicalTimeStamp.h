@class NSUUID;

@interface SiriAnalyticsLogicalTimeStamp : NSObject

@property (readonly, nonatomic) unsigned long long nanoSecondsSinceBoot;
@property (readonly, nonatomic) NSUUID *clockIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMachAbsoluteTime:(unsigned long long)a0 clockIdentifier:(id)a1;
- (id)loggingRepresentation;

@end
