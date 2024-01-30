@interface Filter : NSObject

@property (nonatomic) long long subsystemId;
@property (nonatomic) unsigned int symptomId;
@property (nonatomic) long long queueLenAlert;
@property (nonatomic) long long queueLenDrop;
@property (nonatomic) long long queueTimeLimit;

+ (id)initForSymptom:(unsigned int)a0 withParams:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
