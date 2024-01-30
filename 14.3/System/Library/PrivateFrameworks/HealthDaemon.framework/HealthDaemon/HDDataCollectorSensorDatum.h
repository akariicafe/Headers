@class NSUUID, NSDateInterval, NSData, NSString;

@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum> {
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id /* block */ resumeContextProvider;
@property (readonly, copy, nonatomic) NSUUID *datumIdentifier;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSData *resumeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 resumeContextProvider:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 resumeContext:(id)a2;

@end
