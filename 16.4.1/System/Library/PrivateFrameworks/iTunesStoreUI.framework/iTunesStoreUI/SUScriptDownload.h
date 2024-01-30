@class NSNumber, NSString, ISUDownload;

@interface SUScriptDownload : SUScriptObject {
    ISUDownload *_download;
}

@property (readonly) NSNumber *adamID;
@property (readonly) NSString *phase;
@property (readonly) float progress;

+ (void)initialize;
+ (id)phaseStringForDownload:(id)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithISUDownload:(id)a0;
- (id)initWithSSDownload:(id)a0;

@end
