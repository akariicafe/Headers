@class PKPaper, NSMutableDictionary;

@interface PKPrintSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) PKPaper *paper;

+ (id)default;
+ (id)photo;
+ (id)printSettingsForPrinter:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)settingsDict;

@end
