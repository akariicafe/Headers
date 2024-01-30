@class NSString, NSURL, UIImage, NSError;

@interface PBFPosterSnapshotReservation : NSObject <NSCopying, BSCancellable>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)fetchImageWithError:(out id *)a0;
- (id)initWithURL:(id)a0 image:(id)a1 error:(id)a2;

@end
