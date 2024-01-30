@class NSString;

@interface MLEQPreset : NSObject {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForName:(id)a0;
+ (id)eqPresetForBuiltInPresetType:(int)a0;

- (void).cxx_destruct;
- (id)localizedName;
- (id)name;
- (int)typeForAVController;
- (id)initWithBuiltInPresetType:(int)a0;
- (int)builtInPresetType;

@end
