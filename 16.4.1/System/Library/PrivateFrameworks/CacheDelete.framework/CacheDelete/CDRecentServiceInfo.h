@class NSDictionary;

@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying> {
    struct { struct { double timestamp; unsigned long long amount; } urgencies[4]; unsigned long long non_purgeable_amount; unsigned char data[0]; } recentinfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *itemizedNonPurgeable;

+ (id)CDRecentServiceInfo:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3;

- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validate:(double)a0 atUrgency:(int)a1;
- (id)initWithCoder:(id)a0;
- (void)log;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)updateAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 deductFromCurrentAmount:(BOOL)a4;
- (id)nonPurgeableAmount;
- (id)serialize;
- (id)description;
- (id)amountAtUrgency:(int)a0;
- (void)invalidate;
- (id)initWithAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3;
- (void).cxx_destruct;

@end
