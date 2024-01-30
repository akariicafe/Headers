@class NSString, AVTAvatarPose, NSArray;

@interface AVTAvatarAttributeEditorSectionOptions : NSObject

@property (readonly, copy, nonatomic) NSString *framingMode;
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride;
@property (readonly, copy, nonatomic) NSArray *presetOverrides;
@property (readonly, nonatomic) unsigned long long displayMode;

- (void).cxx_destruct;
- (id)initWithFramingMode:(id)a0 poseOverride:(id)a1 presetOverrides:(id)a2 displayMode:(unsigned long long)a3;
- (id)description;
- (id)stringForDisplayMode;

@end
