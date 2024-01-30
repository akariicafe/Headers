@class NSArray, NSMutableSet;

@interface NNMKDiffMessageResult : NSObject

@property (retain, nonatomic) NSMutableSet *messageIdsToAddToWatch;
@property (retain, nonatomic) NSMutableSet *messageIdsToUpdateOnWatch;
@property (retain, nonatomic) NSMutableSet *messageIdsToDeleteFromWatch;
@property (retain, nonatomic) NSArray *messageToAddToWatch;
@property (nonatomic) BOOL trimed;

- (void).cxx_destruct;

@end
