@class AVTEditingPreviewModeOptions;

@interface AVTEditingPreviewMode : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) AVTEditingPreviewModeOptions *options;

+ (unsigned long long)previewModeTypeForString:(id)a0;
+ (id)defaultPreviewMode;
+ (id)stringForPreviewModeType:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 options:(id)a1;

@end
