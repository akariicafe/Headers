@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long settingsID;
@property (copy, nonatomic) NSURL *outputURL;
@property (copy, nonatomic) NSString *outputFileType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;

@end
