@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {
    NSString *_fileName;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
