@class NSUUID, NSDate;

@interface HDTMockCMNatalieData : CMNatalieData {
    NSDate *_date;
    double _mets;
    double _active;
    double _basal;
    long long _recordID;
    NSUUID *_source;
}

+ (BOOL)supportsSecureCoding;

- (long long)recordId;
- (void)encodeWithCoder:(id)a0;
- (id)sourceId;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)endDate;
- (BOOL)isEqual:(id)a0;
- (id)startDate;
- (void).cxx_destruct;
- (id)basalNatalies;
- (id)mets;
- (id)natalies;
- (id)initWithTimestamp:(double)a0 mets:(double)a1 active:(double)a2 basal:(double)a3 recordID:(long long)a4 source:(id)a5;

@end
