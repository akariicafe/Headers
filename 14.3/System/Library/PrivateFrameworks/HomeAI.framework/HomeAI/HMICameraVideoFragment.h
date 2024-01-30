@class NSArray, NSURL, NSMutableData, NSData;

@interface HMICameraVideoFragment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableData *fragmentData;
@property (retain, nonatomic) NSURL *url;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } sessionPresentationTime;
@property (readonly) unsigned long long sequenceNumber;
@property (readonly) NSData *data;
@property (readonly, nonatomic) NSData *moovFragment;
@property (readonly) long long eventTypes;
@property (readonly) NSArray *activityZones;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSequenceNumber:(unsigned long long)a0 data:(id)a1 moovFragment:(id)a2 eventTypes:(long long)a3 activityZones:(id)a4;
- (id)initWithSequenceNumber:(unsigned long long)a0 data:(id)a1 moovFragment:(id)a2;
- (id)initWithSequenceNumber:(unsigned long long)a0 data:(id)a1 moovFragment:(id)a2 eventTypes:(long long)a3;
- (id)initWithSequenceNumber:(unsigned long long)a0 fragmentData:(id)a1 eventTypes:(long long)a2;
- (id)initWithSequenceNumber:(unsigned long long)a0 fragmentData:(id)a1 eventTypes:(long long)a2 activityZones:(id)a3 url:(id)a4;

@end
