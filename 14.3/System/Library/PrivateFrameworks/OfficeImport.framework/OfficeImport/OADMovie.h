@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia

@property (retain) NSData *data;
@property (retain) NSString *name;
@property BOOL isAudioOnly;
@property BOOL loop;
@property float movieStartPoint;
@property float movieEndPoint;

- (void).cxx_destruct;
- (id)description;

@end
