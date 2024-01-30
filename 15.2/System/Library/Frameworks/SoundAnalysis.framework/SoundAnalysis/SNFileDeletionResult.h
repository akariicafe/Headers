@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult>

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 error:(id)a1;

@end
