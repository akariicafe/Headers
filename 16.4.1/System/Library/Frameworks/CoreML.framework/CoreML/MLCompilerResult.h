@class NSArray;

@interface MLCompilerResult : NSObject

@property (retain) NSArray *outputFiles;

+ (id)resultWithOutputFiles:(id)a0;
+ (id)resultWithArchive:(void *)a0;

- (void).cxx_destruct;

@end
