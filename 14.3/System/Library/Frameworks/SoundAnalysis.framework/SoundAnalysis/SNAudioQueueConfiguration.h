@interface SNAudioQueueConfiguration : NSObject

@property unsigned int creationFlags;
@property (copy) id /* block */ configureAudioQueue;

- (void).cxx_destruct;

@end
