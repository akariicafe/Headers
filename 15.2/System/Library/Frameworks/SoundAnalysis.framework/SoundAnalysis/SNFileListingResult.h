@class NSArray, NSString;

@interface SNFileListingResult : NSObject <SNResult>

@property (retain, nonatomic) NSArray *fileItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFileItems:(id)a0;

@end
