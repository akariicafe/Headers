@class NSURL;

@interface OADLinkedMediaFile : OADMovie

@property (retain) NSURL *url;
@property BOOL isExternal;

- (void).cxx_destruct;

@end
