@class AVTImageValidatorConfiguration, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTImageValidator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *duplicateValidationQueue;
@property (retain, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) AVTImageValidatorConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *fileNameToImageHashesMap;
@property (retain, nonatomic) NSMutableDictionary *imageHashesToAvatarDataHashesMap;
@property (retain, nonatomic) NSMutableDictionary *imageHashesToFileNameMap;

+ (id)sharedValidator;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })_calculateStatistics:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isImageValid:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (void)nts_addHash:(id)a0 forKey:(id)a1 avatarDataHash:(id)a2;
- (BOOL)validateImageDataIsNotDuplicate:(id)a0 forFileName:(id)a1 avatarDataHash:(id)a2;
- (BOOL)validateImageIsNotTransparent:(id)a0 error:(id *)a1;

@end
