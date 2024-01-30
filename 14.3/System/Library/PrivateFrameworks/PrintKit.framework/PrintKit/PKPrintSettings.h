@class PKPaper, NSMutableDictionary;

@interface PKPrintSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) PKPaper *paper;

+ (id)photo;
+ (id)default;
+ (id)printSettingsForPrinter:(id)a0;

- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void)removeObjectForKey:(id)a0;
- (id)settingsDict;

@end
