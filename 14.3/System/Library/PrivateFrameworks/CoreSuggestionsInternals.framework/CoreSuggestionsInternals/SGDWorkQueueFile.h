@class NSString;

@interface SGDWorkQueueFile : NSObject

@property (readonly, nonatomic) NSString *path;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)writeDictionary:(id)a0;
- (id)readDictionary;

@end
