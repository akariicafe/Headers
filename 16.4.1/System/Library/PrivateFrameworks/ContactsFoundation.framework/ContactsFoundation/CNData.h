@class CNFileManager, CNURLSessionFactory;

@interface CNData : NSObject

@property (readonly, nonatomic) CNFileManager *fileManager;
@property (readonly, nonatomic) CNURLSessionFactory *sessionFactory;

+ (id)dataWithContentsOfFileURL:(id)a0;
+ (id)dataWithContentsOfURL:(id)a0;
+ (id)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 fileManager:(id)a3;
+ (id)observableWithContentsOfURL:(id)a0;
+ (id)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;
+ (unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned long long)a0;
+ (id)dataWithContentsOfURL:(id)a0 sessionFactory:(id)a1;
+ (id)observableWithContentsOfURL:(id)a0 sessionFactory:(id)a1;

- (id)dataWithContentsOfURL:(id)a0;
- (id)initWithFileManager:(id)a0 urlSessionFactory:(id)a1;
- (id)observableWithContentsOfURL:(id)a0;
- (id)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;
- (id)initWithFileManager:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
