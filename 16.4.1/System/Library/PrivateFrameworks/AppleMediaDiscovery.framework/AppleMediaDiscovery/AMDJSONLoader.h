@class NSString;

@interface AMDJSONLoader : NSObject

@property (retain, nonatomic) NSString *path;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)loadDataFromFileForClass:(Class)a0;

@end
