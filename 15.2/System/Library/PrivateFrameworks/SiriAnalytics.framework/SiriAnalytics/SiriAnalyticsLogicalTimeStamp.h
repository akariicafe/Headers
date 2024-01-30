@class NSUUID;

@interface SiriAnalyticsLogicalTimeStamp : NSObject

@property (readonly, nonatomic) unsigned long long nanoSecondsSinceBoot;
@property (readonly, nonatomic) NSUUID *clockIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMachAbsoluteTime:(unsigned long long)a0 clockIdentifier:(id)a1;
- (id)loggingRepresentation;

@end
