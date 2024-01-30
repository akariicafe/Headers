@class NSString, KNClassicStylesheetRecord, NSArray, NSMutableArray;

@interface KNClassicThemeRecord : TSPObject {
    NSString *_UUID;
    KNClassicStylesheetRecord *_stylesheetRecord;
    NSMutableArray *_masters;
}

@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) KNClassicStylesheetRecord *stylesheetRecord;
@property (readonly, nonatomic) NSArray *masters;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)addMaster:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
