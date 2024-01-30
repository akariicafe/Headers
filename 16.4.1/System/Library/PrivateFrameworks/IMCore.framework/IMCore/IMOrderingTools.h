@class NSString, NSMutableArray;

@interface IMOrderingTools : NSObject

@property (retain, nonatomic) NSString *jsonFilePath;
@property (retain, nonatomic) NSMutableArray *jsonArray;

- (void).cxx_destruct;
- (id)currentJsonArray;
- (id)messageDictionariesFromItemsInChat:(id)a0 withEventKey:(id)a1;
- (id)pathToDirectoryOfJSONFile;
- (void)printChangeInItemsToJSON:(id)a0;
- (void)printChangeInItemsToJSONFromChat:(id)a0;
- (void)setUpJSONFileForChatGUID:(id)a0;
- (void)startTrackingChat:(id)a0;
- (void)writeDataToJSONFile:(id)a0;

@end
