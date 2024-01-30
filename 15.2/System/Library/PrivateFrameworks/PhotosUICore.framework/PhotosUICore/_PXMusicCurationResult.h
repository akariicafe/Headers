@class NSDictionary, NSError;

@interface _PXMusicCurationResult : NSObject <PXMusicCurationResult>

@property (nonatomic) BOOL isComplete;
@property (copy, nonatomic) NSDictionary *songsByCategory;
@property (retain, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
