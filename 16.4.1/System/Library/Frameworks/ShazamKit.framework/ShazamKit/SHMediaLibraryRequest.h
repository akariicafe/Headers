@class NSError;

@interface SHMediaLibraryRequest : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
