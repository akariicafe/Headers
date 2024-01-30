@class NSString, NSMutableArray, CAState;

@interface CAStateControllerUndo : NSObject <CAStateRecorder>

@property (readonly) CAStateControllerUndo *next;
@property (retain, nonatomic) CAState *state;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *transitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
