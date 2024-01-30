@class NSCache, CNAvatarImageRenderer;

@interface CKPrintController : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer;
@property (retain, nonatomic) NSCache *avatarCache;
@property (nonatomic, setter=setPrinting:) BOOL isPrinting;

+ (id)sharedInstance;
+ (id)printBackgroundColor;
+ (id)printTranscriptTextColor;
+ (id)printBalloonTextColor;
+ (id)printAttributes:(id)a0;
+ (void)printResolvedColors:(id *)a0 balloonDescriptor:(struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)a1 coloredBalloonView:(id)a2;

- (void)clearAvatarCache;
- (void).cxx_destruct;
- (id)avatarImageForContact:(id)a0 diameter:(double)a1;
- (id)init;

@end
