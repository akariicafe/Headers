@class NSString, NSURL, NSError;

@interface SXResourceResponse : NSObject

@property (retain, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
