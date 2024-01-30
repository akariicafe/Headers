@class NSString, NSURL, NSDate, UIImage, CAMCaptureCoordinationInfo;

@interface CAMPersistenceResponse : NSObject

@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) UIImage *scrubberImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUUID:(id)a0 captureSession:(unsigned short)a1 url:(id)a2 creationDate:(id)a3 scrubberImage:(id)a4 pixelSize:(struct CGSize { double x0; double x1; })a5 coordinationInfo:(id)a6;

@end
