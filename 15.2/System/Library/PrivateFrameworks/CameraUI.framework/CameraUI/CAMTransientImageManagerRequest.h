@class NSString;

@interface CAMTransientImageManagerRequest : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isFinished;

- (void).cxx_destruct;

@end
