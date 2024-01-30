@class NSString, NSDate;

@interface TAPredictedLocationOfInterest : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) unsigned long long referenceFrame;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSDate *nextEntryTime;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)getDate;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 confidence:(double)a4 nextEntryTime:(id)a5 date:(id)a6;
- (id)initWithType:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 referenceFrame:(unsigned long long)a4 confidence:(double)a5 nextEntryTime:(id)a6 date:(id)a7;

@end
