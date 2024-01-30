@class NSURL, NSError;

@interface _LSOpenCopierContext : NSObject

@property (nonatomic) int callbackType;
@property (retain, nonatomic) NSURL *destURL;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
