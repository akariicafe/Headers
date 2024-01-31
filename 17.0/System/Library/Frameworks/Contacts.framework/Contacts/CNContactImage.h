@class CNVisualFingerprint, NSString, NSData, NSDate, CNContactPoster;

@interface CNContactImage : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *variant;
@property (retain, nonatomic) NSData *poseConfigurationData;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) BOOL ignoredForRevert;
@property (retain, nonatomic) CNVisualFingerprint *visualFingerprint;
@property (retain, nonatomic) CNContactPoster *pairedPoster;

- (void).cxx_destruct;
- (id)copyWithNewImageData:(id)a0;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lastUsedDate:(id)a3;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lastUsedDate:(id)a2;
- (id)resizedContactImageForMeCardSharing;
- (id)copyWithNewImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 lastUsedDate:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 source:(long long)a4 sourceIdentifier:(id)a5 variant:(id)a6 poseConfigurationData:(id)a7 displayString:(id)a8 ignoredForRevert:(BOOL)a9;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lastUsedDate:(id)a2 source:(long long)a3;
- (id)resizedContactImageToMaxEdgeWidth:(unsigned long long)a0;

@end
