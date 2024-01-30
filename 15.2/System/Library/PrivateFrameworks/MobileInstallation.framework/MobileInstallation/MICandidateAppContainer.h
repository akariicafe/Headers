@class NSURL;

@interface MICandidateAppContainer : MICandidateContainer

@property (retain, nonatomic) NSURL *appURL;
@property (readonly, nonatomic) BOOL isPlaceholder;

- (void).cxx_destruct;

@end
