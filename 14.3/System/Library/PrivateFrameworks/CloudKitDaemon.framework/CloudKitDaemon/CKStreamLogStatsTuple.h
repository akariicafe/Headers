@class NSString;

@interface CKStreamLogStatsTuple : NSObject

@property (retain, nonatomic) NSString *fileAndLine;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;

@end
