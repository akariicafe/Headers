@class NSString, NSTimeZone, NSDate;

@interface BWPhotoDescriptor : NSObject <NSSecureCoding> {
    NSDate *_time;
    BOOL _timeHasBeenSet;
    NSTimeZone *_timeZone;
    BOOL _timeZoneHasBeenSet;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _presentationTimeStamp;
    BOOL _presentationTimeStampHasBeenSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *photoIdentifier;
@property (readonly, nonatomic) unsigned int processingFlags;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPhotoIdentifier:(id)a0 processingFlags:(unsigned int)a1 time:(id)a2 timeZone:(id)a3 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoIdentifier:(id)a0 processingFlags:(unsigned int)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
