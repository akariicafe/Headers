@class NSString, TSWPTextStylePreset;

@interface TSWPTextPresetDisplayItem : NSObject

@property (retain, nonatomic) TSWPTextStylePreset *preset;
@property (copy, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithPreset:(id)a0 displayName:(id)a1;

@end
