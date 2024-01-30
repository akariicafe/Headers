@class NSURL, NSString, NSError;

@interface CAMIrisVideoJob : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSString *stillImagePersistenceUUID;
@property (readonly, nonatomic) NSString *videoPersistenceUUID;
@property (readonly, nonatomic) NSString *irisIdentifier;
@property (readonly, nonatomic) long long captureDevice;
@property (readonly, nonatomic) long long captureOrientation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageDisplayTime;
@property (readonly, nonatomic) double captureTime;
@property (readonly, nonatomic) NSError *captureError;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSURL *filteredVideoURL;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isCTMVideo) BOOL CTMVideo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVideoURL:(id)a0 stillImagePersistenceUUID:(id)a1 videoPersistenceUUID:(id)a2 irisIdentifier:(id)a3 captureDevice:(long long)a4 captureOrientation:(long long)a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 stillImageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 captureTime:(double)a8 captureError:(id)a9 filterName:(id)a10 filteredVideoURL:(id)a11 persistenceOptions:(long long)a12 temporaryPersistenceOptions:(long long)a13 bundleIdentifier:(id)a14;

@end
