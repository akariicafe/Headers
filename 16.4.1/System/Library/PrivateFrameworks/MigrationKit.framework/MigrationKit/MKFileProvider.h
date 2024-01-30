@class NSString;

@interface MKFileProvider : NSObject

@property (copy, nonatomic) NSString *rootPath;

- (void).cxx_destruct;
- (id)fetchRootPath;

@end
