@class NSOrderedSet, NSString, NSMutableSet;

@interface _NACListeningModesRecord : NSObject

@property (retain, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (retain, nonatomic) NSMutableSet *observers;

- (void).cxx_destruct;

@end
