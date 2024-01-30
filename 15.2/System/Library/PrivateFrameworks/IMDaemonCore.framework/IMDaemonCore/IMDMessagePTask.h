@class NSString;

@interface IMDMessagePTask : NSObject

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) unsigned long long taskFlags;

- (id)initWithGUID:(id)a0;
- (void)dealloc;
- (BOOL)needsProccesingFor:(unsigned long long)a0;
- (void)compeletedTask:(unsigned long long)a0;
- (void)setTaskFlag:(unsigned long long)a0;
- (id)initWithStoreDictionary:(id)a0;

@end
