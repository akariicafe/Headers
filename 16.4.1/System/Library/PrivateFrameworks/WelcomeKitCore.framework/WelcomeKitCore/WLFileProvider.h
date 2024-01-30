@class NSString;

@interface WLFileProvider : NSObject

@property (copy, nonatomic) NSString *rootPath;

- (void).cxx_destruct;
- (id)fetchRootPath;

@end
