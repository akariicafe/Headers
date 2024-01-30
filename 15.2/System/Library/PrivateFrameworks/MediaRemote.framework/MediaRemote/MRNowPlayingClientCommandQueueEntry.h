@class MRPlayerPath, NSMutableDictionary, NSDate;

@interface MRNowPlayingClientCommandQueueEntry : NSObject

@property (nonatomic) unsigned int command;
@property (retain, nonatomic) NSMutableDictionary *options;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) id /* block */ commandCompletion;

- (id)description;
- (void).cxx_destruct;

@end
