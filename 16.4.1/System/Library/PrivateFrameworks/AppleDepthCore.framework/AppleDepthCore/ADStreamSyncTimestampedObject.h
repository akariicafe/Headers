@interface ADStreamSyncTimestampedObject : NSObject

@property (retain, nonatomic) id data;
@property (retain, nonatomic) id metadata;
@property double midExposureTimestamp;
@property double timestamp;
@property struct { void /* unknown type, empty encoding */ columns[4]; } pose;

- (void).cxx_destruct;

@end
