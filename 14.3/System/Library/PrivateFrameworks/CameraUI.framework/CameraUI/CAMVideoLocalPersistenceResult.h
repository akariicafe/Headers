@class NSError, NSString, NSURL, NSDate, NSData, CAMCaptureCoordinationInfo;

@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *localDestinationURL;
@property (readonly, copy, nonatomic) NSURL *filteredLocalDestinationURL;
@property (readonly, copy, nonatomic) NSURL *linkedDestinationURL;
@property (readonly, copy, nonatomic) NSURL *filteredLinkedDestinationURL;
@property (readonly, copy, nonatomic) NSString *filteredVideoPreviewPath;
@property (readonly, copy, nonatomic) NSString *localPersistenceUUID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { int width; int height; } dimensions;
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillDisplayTime;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSData *adjustmentsData;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 filteredLocalDestinationURL:(id)a1 linkedURL:(id)a2 filteredLinkedURL:(id)a3 videoThumbnailPath:(id)a4 UUID:(id)a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 dimensions:(struct { int x0; int x1; })a7 stillPersistenceUUID:(id)a8 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a9 creationDate:(id)a10 adjustmentsData:(id)a11 coordinationInfo:(id)a12 error:(id)a13;

@end
