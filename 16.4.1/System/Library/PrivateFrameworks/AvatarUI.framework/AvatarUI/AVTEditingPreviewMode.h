@class AVTEditingPreviewModeOptions;

@interface AVTEditingPreviewMode : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) AVTEditingPreviewModeOptions *options;

+ (id)defaultPreviewMode;
+ (unsigned long long)previewModeTypeForString:(id)a0;
+ (id)stringForPreviewModeType:(unsigned long long)a0;

- (id)initWithType:(unsigned long long)a0 options:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
